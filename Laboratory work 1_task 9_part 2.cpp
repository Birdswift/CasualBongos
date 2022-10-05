//Является ли треугольник тупоугольным? Task_9 part_2
#include <iostream>
int main()
{
    int a, b, c, i = 0;
    setlocale(LC_ALL, "rus");
    std::cout << "Введите стороны треугольника" << std::endl;
    std::cin >> a >> b >> c;
    if (((c ^ 2) < (a ^ 2 + b ^ 2)) || ((a ^ 2) < (c ^ 2 + b ^ 2)) || ((b ^ 2) < (a ^ 2 + c ^ 2)))
    {
     std::cout << "Треугольник является тупоугольным" <<std::endl;
    }
    else {
     std::cout << "Треугольник не является тупоугольным" <<std::endl;
    }
    return 0;
}
