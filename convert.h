#include <iostream>
using namespace std;
void convert(double ca, double cb, const char* e1, const char* e2, const char* t1, const char* t2)
{
    setlocale(LC_ALL, "rus");
    double a,b;
    cout << e1;
    cin >> a;
    cout << e2;
    cin >> b;
    cout << t1<< a * ca << endl << t2 <<b * cb << endl;
    system("pause");
}