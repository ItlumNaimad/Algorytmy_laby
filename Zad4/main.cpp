#include <iostream>
using namespace std;
double potega(int podstawa, int wykladnik)
{
    int wynik=1;
    if(wykladnik>0)
    {
        for(int i=1; i<=wykladnik; i++)
            wynik*=podstawa;
        return wynik;
    }
    else if(wykladnik==0)
        return 1;
    else
    {
        for (int i = 0; i > wykladnik; i--)
            wynik *= podstawa;
        return 1.0/wynik;
    }
}
int a,b;
int main()
{
    cout<<"Podaj podstawe potegi:";
    cin>>a;
    cout<<endl<<"Podaj wykladnik potegi:";
    cin>>b;
    cout<<endl<<"Potega "<<a<<" o wykladniku "<<b<<" = "<<potega(a,b)<<endl;
    getchar();
    return 0;
}
