#include <iostream>

class Figure
{
public:

    Figure()
    {
        kol_storon = 0;
        //std::cout << "Создан класс" << std::endl;
    }
    int kol_storon;
    void vivod1()
    {
        std::cout << "Привет" << std::endl;
    }
    virtual void vivod()
    {
        std::cout << "Фигура" << std::endl;
        praviln();
        std::cout << "Количество сторон равно:" << kol_storon << std::endl;
        std::cout << std::endl;
    }
    virtual void praviln()
    {
        std::cout << "Фигура правильная" << std::endl;
    }
};

class Treug : public Figure
{
public:
    Treug(double A, double B, double C, double a, double b, double c)
    {
        this->A = A;
        this->B = B;
        this->C = C;
        this->a = a;
        this->b = b;
        this->c = c;
        kol_storon = 3;
    };


    void vivod()
    {
        std::cout << "Фигура треугольник" << std::endl;
        praviln();
        std::cout << "Количество сторон равно:" << kol_storon << std::endl;
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << ": " << std::endl;
        std::cout << std::endl;


    }
    void praviln()
    {
        if ((A + B + C) == 180)
            std::cout << "Треугольник правильный" << std::endl;
        else
            std::cout << "Треугольник неправильный" << std::endl;
    }



protected:
    double A, B, C, a, b, c;

};


class Shetug : public Figure
{
public:
    Shetug(double A, double B, double C, double D, double a, double b, double c, double d)
    {
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        kol_storon = 4;

    }
    void vivod()
    {
        std::cout << "Фигура четырехугольник" << std::endl;
        praviln();
        std::cout << "Количество сторон равно:" << kol_storon << std::endl;
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << "d=" << d << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << "D=" << D << ": " << std::endl;
        std::cout << std::endl;
    }
    void praviln()
    {
        if ((A + B + C + D) == 360)
            std::cout << "Четырехугольник правильный" << std::endl;
        else
            std::cout << "Четырехугольник неправильный" << std::endl;
    }

protected:
    double A, B, C, D, a, b, c, d;
};


class Priam_treug : public Treug
{
public:
    Priam_treug(double A, double B, double C, double a, double b, double c) : Treug(A, B, C, a, b, c)
    {
    }

    void vivod()
    {
        std::cout << "Прямоугольный треугольник" << std::endl;
        praviln();
        std::cout << "Количество сторон равно:" << kol_storon << std::endl;
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << ": " << std::endl;
        std::cout << std::endl;


    }
    void praviln()
    {
        if ((A + B + C) == 180 && (C == 90))
            std::cout << "Прямоугольный треугольник правильный" << std::endl;
        else
            std::cout << "Прямоугольный треугольник неправильный" << std::endl;
    }
};

class Ravnbedr_treug : public Treug
{

public:
    Ravnbedr_treug(double A, double B, double C, double a, double b, double c) : Treug(A, B, C, a, b, c)
    {
    };

    void vivod()
    {
        std::cout << "Равнобедренный треугольник" << std::endl;
        praviln();
        std::cout << "Количество сторон равно:" << kol_storon << std::endl;
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << ": " << std::endl;
        std::cout << std::endl;


    }
    void praviln()
    {
        if ((A + B + C) == 180 && (A == C) && (a == c))
            std::cout << "Равнобедренный треугольник правильный" << std::endl;
        else
            std::cout << "Равнобедренный треугольник неправильный" << std::endl;
    }


};


class Ravnostor_treug : public Treug
{

public:
    Ravnostor_treug(double A, double B, double C, double a, double b, double c) : Treug(A, B, C, a, b, c)
    {

    };

    void vivod()
    {
        std::cout << "Равносторонний треугольник" << std::endl;
        praviln();
        std::cout << "Количество сторон равно:" << kol_storon << std::endl;
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << ": " << std::endl;
        std::cout << std::endl;


    }
    void praviln()
    {
        if ((A == 60) && (B == 60) && (C == 60) && (a == c) && (a == b))
            std::cout << "Равносторонний треугольник правильный" << std::endl;
        else
            std::cout << "Равносторонний треугольник неправильный" << std::endl;
    }

};


class Paralerogram : public Shetug
{
public:
    Paralerogram(double A, double B, double C, double D, double a, double b, double c, double d) :Shetug(A, B, C, D, a, b, c, d)
    {

    };
    void vivod()
    {
        std::cout << "Фигура Параллелограмм" << std::endl;
        praviln();
        std::cout << "Количество сторон равно:" << kol_storon << std::endl;
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << "d=" << d << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << "D=" << D << ": " << std::endl;
        std::cout << std::endl;
    }
    void praviln()
    {
        if (((A + B + C + D) == 360) && (A == C) && (a == c) && (B == D) && (b == d))
            std::cout << "Параллелограмм правильный" << std::endl;
        else
            std::cout << "Параллелограмм неправильный" << std::endl;
    }
};

class Priamoug : public Shetug
{
public:
    Priamoug(double A, double B, double C, double D, double a, double b, double c, double d) :Shetug(A, B, C, D, a, b, c, d)
    {
    }
    void vivod()
    {
        std::cout << "Фигура прямоугольник" << std::endl;
        praviln();
        std::cout << "Количество сторон равно:" << kol_storon << std::endl;
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << "d=" << d << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << "D=" << D << ": " << std::endl;
        std::cout << std::endl;
    }
    void praviln()
    {
        if ((A == 90) && (B == 90) && (C == 90) && (D == 90) && (a == c) && (b == d))
            std::cout << "Прямоугольник правильный" << std::endl;
        else
            std::cout << "Прямоугольник неправильный" << std::endl;
    }

};

class Kvadrat : public Shetug
{
public:

    Kvadrat(double A, double B, double C, double D, double a, double b, double c, double d) : Shetug(A, B, C, D, a, b, c, d)
    {}
    void vivod()
    {
        std::cout << "Фигура квадрат" << std::endl;
        praviln();
        std::cout << "Количество сторон равно:" << kol_storon << std::endl;
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << "d=" << d << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << "D=" << D << ": " << std::endl;
        std::cout << std::endl;
    }
    void praviln()
    {
        if ((A == 90) && (B == 90) && (C == 90) && (D == 90) && (a == c) && (b == d) && (c == b))
            std::cout << "Квадрат правильный" << std::endl;
        else
            std::cout << "Квадрат неправильный" << std::endl;
    }

};

class Romb : public Shetug
{
public:
    Romb(double A, double B, double C, double D, double a, double b, double c, double d) : Shetug(A, B, C, D, a, b, c, d)
    {};

    void vivod()
    {
        std::cout << "Фигура ромб" << std::endl;
        praviln();
        std::cout << "Количество сторон равно:" << kol_storon << std::endl;
        std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << "d=" << d << ": " << std::endl;
        std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << "D=" << D << ": " << std::endl;
        std::cout << std::endl;
    }
    void praviln()
    {
        if (((A + B + C + D) == 360) && (A == C) && (a == c) && (B == D) && (b == d) && (c == b))
            std::cout << "Ромб правильный" << std::endl;
        else
            std::cout << "Ромб неправильный" << std::endl;
    }


};


int main()
{
    setlocale(LC_ALL, "Russian");

    Figure S;
   // S.vivod();
    Treug S1(50, 60, 70, 10, 20, 30);
    Priam_treug S2(50, 60, 90, 10, 20, 30);
    Priam_treug S2_2(50, 40, 90, 10, 20, 30);
    Ravnbedr_treug S3(50, 60, 50, 10, 20, 10);
    Ravnostor_treug S4(60, 60, 60, 30, 30, 30);
    Shetug S5(50, 60, 70, 80, 10, 20, 30, 40);
    Priamoug S6(90, 90, 90, 90, 10, 20, 10, 20);
    Kvadrat S7(90, 90, 90, 90, 20, 20, 20, 20);
    Paralerogram S8(30, 40, 30, 40, 20, 30, 20, 30);
    Romb S9(30, 40, 30, 40, 30, 30, 30, 30);

    Figure* ukazat;
    ukazat = &S;
    ukazat->vivod();
    ukazat = &S1;
    ukazat->vivod();
    ukazat = &S2;
    ukazat->vivod();
    ukazat = &S2_2;
    ukazat->vivod();
    ukazat = &S3;
    ukazat->vivod();
    ukazat = &S4;
    ukazat->vivod();
    ukazat = &S5;
    ukazat->vivod();
    ukazat = &S6;
    ukazat->vivod();
    ukazat = &S7;
    ukazat->vivod();
    ukazat = &S8;
    ukazat->vivod();
    ukazat = &S9;
    ukazat->vivod();







    //std::cout << "Hello World!\n";
}
/*
В этом задании вы добавите в вашу иерархию классов больше функциональности.

Теперь ваши фигуры должны уметь немного больше:

    выводить информацию о себе;
    проверять правильность своих данных.

Ваши фигуры:

    фигура (количество сторон равно 0);
    треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180);
    прямоугольный треугольник (угол C всегда равен 90);
    равнобедренный треугольник (стороны a и c равны, углы A и C равны);
    равносторонний треугольник (все стороны равны, все углы равны 60);
    четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
    прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
    квадрат (все стороны равны, все углы равны 90);
    параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
    ромб (все стороны равны, углы A,C и B,D попарно равны).

Вы должны иметь возможность попросить фигуру вывести информацию о себе на консоль, а также узнать, является ли фигура правильной, то есть выполняются ли условия, указанные в списке выше.

Информация о фигуре включает в себя:

    название фигуры;
    количество сторон;
    длины её сторон, если есть;
    величины её углов, если есть;
    является ли фигура правильной.

Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонструйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о фигурах.

Реализуйте методы вывода на консоль и проверки правильности фигуры с помощью виртуальных функций и переопределений. Используйте вызов базовой версии метода.

Ваша задача — работать с экземплярами дочерних классов полиморфно, то есть с помощью указателя на базовый класс.
Пример работы программы
Консоль

Фигура:
Правильная
Количество сторон: 0

Треугольник:
Правильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Неправильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Прямоугольный треугольник:
Правильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=40 C=90

Равнобедренный треугольник:
Неправильная
Количество сторон: 3
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Правильная
Количество сторон: 3
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Неправильная
Количество сторон: 4
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Правильная
Количество сторон: 4
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Правильная
Количество сторон: 4
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Неправильная
Количество сторон: 4
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Неправильная
Количество сторон: 4
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40


*/

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
