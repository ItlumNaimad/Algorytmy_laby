#include <iostream>

using namespace std;
int dlaSilni;
int silnia_rek(int liczba)
{
    if (liczba == 0) return 1;
    else return liczba*silnia_rek(liczba-1);
}
int main()
{
    cout<<"Podaj silnie:";
    cin>>dlaSilni;
    cout<<endl<<"Silnia z "<<dlaSilni<<"! = "<<silnia_rek(dlaSilni);
    return 0;
}