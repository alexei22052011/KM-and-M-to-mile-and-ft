#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double a,b;
    printf("������� ����� � ����������: ");
    cin >> a;
    printf("������� ����� � ������: ");
    cin >> b;
    const double ca = 0.621371, cb = 3.28084, ra = ca * a, rb = cb * b;
    cout << "����: " << ra << "\n����: " << rb << endl;
    system("pause");
}