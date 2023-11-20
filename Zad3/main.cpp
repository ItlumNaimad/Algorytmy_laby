#include <iostream>
int silnia,wynik=1; //zmienne dla silni
using namespace std;
int main()
{
    cout<<"Podaj silnie: ";
    cin>>silnia;
    for(int i=1; i<=silnia; i++)
    {
        wynik*=i;
    }
    cout<<endl<<"Silnia "<<silnia<<"!="<<wynik;
    getchar();
    return 0;
}
