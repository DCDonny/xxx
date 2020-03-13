#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    for(;;)
    {
    cout<<"Twoje imie:";
    cin>>imie;
    cout<<"Twoje nazwisko:";
    cin>>nazwisko;
    cout<<"Telefon:";
    cin>>nr_tel;
    fstream plik;
    plik.open("wizytowka.txt", ios::out);
        plik<<imie<<endl; 
        plik<<nazwisko<<endl;
        plik<<nr_tel<<endl;
    plik.close();
    plik.open("cykle.txt", ios::app);
        plik<<imie<<endl; 
        plik<<nazwisko<<endl;
        plik<<nr_tel<<endl;
    plik.close();

        if(imie=="Adam" && nazwisko=="Gorka")
        {
            cout<<"Witaj"<<endl;
            fstream plik;
            plik.open(("cykle.txt"), ios::in);
            if(plik.good()==false)
            {
                cout<<"Nie ma takiego pliku"<<endl;
            }
            string linia;
            int nr_linii=1;
            while(getline(plik, linia))
            {
                switch(nr_linii)
                {
                case 1: imie = linia; break;
                case 2: nazwisko = linia; break;
                case 3: nr_tel = atoi(linia.c_str()); break;
                }
                
                nr_linii++;
                
            }
            plik.close();
            cout<<imie<<endl;
            cout<<nazwisko<<endl;
            cout<<nr_tel<<endl;
            exit(0);
        }
    }





    return 0;
}