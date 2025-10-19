#pragma once // файл дизайна
#include <iostream>
using namespace std;

class Point // интерфейс класса, прототипы методов
{
    int x;
    int y;
public: // реализация класса
    Point();
    Point(int a, int b);
    void Init(int a, int b);
    void Init();        
    void Print();       

    static int count;  

    // оператори
    Point operator+(Point& b);
    Point operator-(Point& b);
    Point operator*(Point& b);
    Point operator/(Point& b);
};
