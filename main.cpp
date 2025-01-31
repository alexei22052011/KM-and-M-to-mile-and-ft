#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double a,b;
    printf("Введите число в километрах: ");
    cin >> a;
    printf("Введите число в метрах: ");
    cin >> b;
    const double ca = 0.621371, cb = 3.28084, ra = ca * a, rb = cb * b;
    cout << "Мили: " << ra << "\nФуты: " << rb << endl;
    system("pause");
}