#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point a(1, 2), b(3, 4);

    Point d = a + b;
    Point d1 = a * b;
    Point d2 = b - a;
    Point d3 = a / b;

    cout << "a + b = "; d.Print();
    cout << "a * b = "; d1.Print();
    cout << "b - a = "; d2.Print();
    cout << "a / b = "; d3.Print();

    cout << "Створено точок: " << Point::count << endl;

    return 0;
}
