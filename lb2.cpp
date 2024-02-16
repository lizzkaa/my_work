
#include <iostream>
#include <cmath>

class tetrahedron {
    int a;
    float s;
    float v;

public:
    tetrahedron(int valueA)
    {
        a = valueA;
        s = sqrt(3) * pow(a, 2);
        v = (pow(a, 3) * sqrt(2)) / 12;
    }
    void print() {
        std::cout << "сторона:" << a << ", Площадь поверхности:" << s << ", Объем" << v;
    }
};

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int x;
    std::cout << "Введите сторону тетраэдра:";
    std::cin >> x;
    tetrahedron a(x);
    a.print();

}
