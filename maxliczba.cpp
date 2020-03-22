#include <iostream>

using namespace std;
int ilosc=0;
int main()
{
    cout<<"Ile liczb chcesz porownac?"<<endl;
    cin>>ilosc;
    int*liczba;
    liczba=new int [ilosc];
    for(int i=1; i<=ilosc; i++)
    {
        cout<<"Wprowadz liczbe nr"<<i<<endl;
        cin>>liczba[i];
    }
    int m=liczba[1];

    
    for(int i=2; i<ilosc-1; i++)
    {
        if(liczba[i]<liczba[i-1])
        {
            m=liczba[i-1];
        }
        if(liczba[i]>liczba[i-1])
        {
            m=liczba[i];
        }
    }
    for(int i=1; i<=ilosc; i++)
    {
        cout<<"Liczba"<<i<<"="<<liczba[i]<<endl;
    }
    
    
    cout<<"Najwieksza wartosc ma liczba:"<<m<<endl;
    

    return 0;
}