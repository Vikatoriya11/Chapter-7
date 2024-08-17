#include <iostream>
using namespace std;

const int seasons = 4;
const char * s [seasons] = {"spring", "summer", "fall", "winter"};

void fill (double * pa);
void show(const double *da);

int main(int argc, char **argv)
{

    double expenses [seasons];

    fill(expenses);
    show(expenses);
    return 0;
}

void fill (double * pa)
{
    for (int i = 0; i<seasons; i++) {
        cout<<"Enter "<<s[i]<<" expenses: ";
        cin>>pa[i];
    }
}

void show(const double *da)
{
    double total = 0.0;
    cout<<" \nEXPENSES\n";
    for (int i = 0; i<seasons; i++) {
        cout<<"Enter "<<s[i]<< ": $" << da[i] << endl ;
        total += da[i] ;
    }
    cout << "Total Expenses: $" << total << endl ;
}
