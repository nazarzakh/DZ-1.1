#include "Point.h"
#include <iostream>
using namespace std;

int Point::count = 0; // статичне поле

Point::Point()
{
    x = 0;
    y = 0;
    ++count;
    cout << "Construct by default\n";
}

Point::Point(int a, int b)
{
    x = a;
    y = b;
    ++count;
    cout << "Construct by 2 params\n";
}

void Point::Init(int a, int b)
{
    x = a;
    y = b;
}

void Point::Init()
{
    cout << "Enter x: "; cin >> x;
    cout << "Enter y: "; cin >> y;
}

void Point::Print()
{
    cout << "X: " << x << "\tY: " << y << endl;
}

// оператори
Point Point::operator+(Point& b)
{
    Point res;
    res.x = x + b.x;
    res.y = y + b.y;
    return res;
}

Point Point::operator-(Point& b)
{
    Point res;
    res.x = x - b.x;
    res.y = y - b.y;
    return res;
}

Point Point::operator*(Point& b)
{
    Point res;
    res.x = x * b.x;
    res.y = y * b.y;
    return res;
}

Point Point::operator/(Point& b)
{
    Point res;
    if (b.x == 0) {
        cerr << " x Ч set 0\n";
        res.x = 0;
    }
    else res.x = x / b.x;

    if (b.y == 0) {
        cerr << "y Ч set 0\n";
        res.y = 0;
    }
    else res.y = y / b.y;

    return res;
}
