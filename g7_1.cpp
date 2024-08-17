#include <iostream>
using namespace std;

double srg(double x, double y);
int main(int argc, char **argv)
{
    double x = 0;
    double y = 0;
    double res = 0;

    while (true) { // Цикл для многократного ввода
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;

        if (x == 0 || y == 0) {
            cout << "Bye!" << endl;
            break; 
        }

        res = srg(x, y);
        cout << res << endl;
    }

    return 0;
};

double srg(double x, double y)
{
    double sred = 0;
    if (x == 0 || y == 0) {
        return 0; // Возвращаем 0, если одно из чисел равно 0
    }
    sred = 2.0 * x * y / (x + y);
    return sred;
}
