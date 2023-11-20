#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ninequests.h" //biblioteka z funkcjami dla zadania nr.6
using namespace std;
int tab_elements, n=0;
int main()
{
    srand(time(nullptr));
    cout<<"Ilu elementowa ma byc tablica?"<<endl;
    cin>>tab_elements;
    double tab[tab_elements];

    for(int i=0; i<tab_elements; i++)
    {
        tab[i]=rand()%1000+1;
        cout<<tab[i]<<endl;
    }
    // najwysza wartosc
    cout<<"Najwyzsza wartosc z tablicy to :"<<maximum_int(tab, tab_elements)<<endl;
    // najnizsza wartosc
    cout<<"Najwyzsza wartosc z tablicy to :"<<minimum_int(tab, tab_elements)<<endl;
    //rozrzut wartosci
    cout<<"Rozrzut wartosci z tablicy to :"<<spreadOfVal(tab, tab_elements)<<endl;
    //suma wartości z tablicy
    cout<<"Suma wartosci z tablicy to :"<<sumFromArray(tab, tab_elements)<<endl;
    // Średnia z wartości w tablicy
    cout<<"Srednia wartosc z tablicy to :"<<average(tab, tab_elements)<<endl;
    // Odchylenie standardowe wartości z tablicy
    cout<<"Odchylenie standardowe z tablicy to :"<<Standard_deviation(tab, tab_elements)<<endl;
    //wariancja
    cout<<"Wariancja wartosci z tablicy to :"<<Standard_deviation(tab, tab_elements)<<endl;
    // Występowanie elementów podzielnych przez 3
    cout<<"Elementy tablicy podzielne przez 3 :"<<Standard_deviation(tab, tab_elements)<<endl;
    // wartość n-tego elementu tablicy
    cout<<"Podaj numer indekus tablicy do wywolania wartosci:";
    cin>>n;
    cout<<"Tablica elementu n-tego:"<<Standard_deviation(tab, n)<<endl;


    return 0;
}
