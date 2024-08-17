#include <iostream>

using namespace std;

double f(double totals_p,double totals_m,double choises)
{
    return ((choises/totals_p) * (1/totals_m));
}

int main(int argc, char **argv)
{
    double totals_p, totals_m, choises;

    cout<<"Totals pole: ";
    cin>>totals_p;

    cout<<"Totals meganomer: ";
    cin>>totals_m;

    cout<<"Choises: ";
    cin>>choises;

    double res = f(totals_p,totals_m,choises);
    cout<<res<<endl;

    return 0;
}
