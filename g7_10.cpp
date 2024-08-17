#include <iostream>
using namespace std;

double add(double x, double y)
{
    return x + y;
}

double mul(double x, double y)
{
    return x * y;
}

double sub(double x, double y)
{
    return x - y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
    return (*pf)(x, y);
}

int main()
{
    double a, b;
    char another;
    double (*pf[3])(double, double) = {add, sub, mul};
    do {
        cout << "Enter first number a: ";
        cin >> a;
        cout << "Enter second number b: ";
        cin >> b;

        for (int i = 0; i<3; i++) {
            double result = calculate(a,b,pf[i]);
            cout <<result<<endl;
        }

        cout << "Do you want to enter another pair of numbers? (y/n): ";
        cin >> another;

    } while (another == 'y' || another == 'Y');

    return 0;
}
