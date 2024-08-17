#include <iostream>

using namespace std;

void Fill_array(double ar[], int size)
{
    double temp;
    int i;
    for (i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input" << endl;
            break;
        }
        ar[i] = temp;
    }
}

void Show_array(double ar[], int size)
{
    for(int i = 0; i<size; i++) {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

void Reverse_array(double ar[], int size)
{
    for (int i = 1; i < size / 2; i++) { // цикл от 1 до середины массива
        double temp = ar[i];
        ar[i] = ar[size - i - 1];
        ar[size - i - 1] = temp;
    }
}

int main(int argc, char **argv)
{
    int n;
    cout<<"Enter size: ";
    cin>>n;

    double massiv[n];

    Fill_array(massiv, n);
    Show_array(massiv, n);
    Reverse_array(massiv, n);
    Show_array(massiv, n);
    return 0;
}
