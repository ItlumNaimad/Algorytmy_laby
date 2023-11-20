#include <iostream>
using namespace std;
long liczba;
int wynik=0;
int pamiec=0;
int main() {
    cout<<"Podaj liczbe, do zsumowania jej cyfr";
    cin>>liczba;
    while(liczba!=0)
    {
        pamiec=liczba%10;
        wynik+=pamiec;
        liczba=(liczba-pamiec)/10;
        cout<<"Liczba="<<liczba<<"  |   Suma cyfr="<<wynik<<endl;
    }
    return 0;
}
