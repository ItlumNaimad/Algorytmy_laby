#include <iostream>

using namespace std;
int nww; // najmniejsza wspolna wielokrotnosc
int nwd; // najwiekszy wspolny dzielnik
int m,n; //dwie liczby
int tmp; //
int main()
{
    cout << "Podaj liczbe m:";
    cin >>m;
    cout <<endl<<"Podaj liczbe n:";
    cin >>n;
    nww=m*n;

    while(n!=0)
    {
        tmp=m%n;
        m=n;
        n=tmp;
    }
    nww/=m;
    cout<<"NWW="<<nww<<endl<<"NWD="<<m;
    getchar();
    return 0;
}
