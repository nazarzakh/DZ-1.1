#pragma once // ���� �������
#include <iostream>
using namespace std;

class Point // ��������� ������, ��������� �������
{
    int x;
    int y;
public: // ���������� ������
    Point();
    Point(int a, int b);
    void Init(int a, int b);
    void Init();        
    void Print();       

    static int count;  

    // ���������
    Point operator+(Point& b);
    Point operator-(Point& b);
    Point operator*(Point& b);
    Point operator/(Point& b);
};
