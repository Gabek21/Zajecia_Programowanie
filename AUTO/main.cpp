#include <iostream>

using namespace std;


struct Auto
{
    string marka;
    int rok;
    double cena;
};

int main()
{
    int const n = 4;
    Auto tablica[n];
    Auto punkt;

    for(int i = 0; i < n; i++)
    {
        cout << "Podaj markê" << endl;
        cin >> punkt.marka;
        cout << "Podaj rocznik" << endl;
        cin >> punkt.rok;
        cout << "Podaj cene" << endl;
        cin >> punkt.cena;
        tablica[i] = punkt;
    }

    cout << "Wybór sortowania [wybierz 1 lub 2]:" << endl;
    cout << "1. Sortowanie wg ceny\t2. Sortowanie wed³ug rocznika" << endl;
    int wybor;
   while (wybor == 1 && wybor == 2)
   {
       cin >> wybor;
   }

    if(wybor == 1) // Sortowanie wg ceny
    {
        for(int i = 0; i < n - 1; i++)
        {
            if (tablica[i].cena > tablica[i+1].cena)
            {   Auto temp;
                temp = tablica[i];
                tablica[i] = tablica[i+1];
                tablica[i+1] = tablica[i];
            }
        }
    }   else if(wybor == 2) // Sortowanie wg roku
    {
        for(int i = 0; i < n - 1; i++)
        {
            if (tablica[i].rok > tablica[i+1].rok)
            {
                Auto temp;
                temp = tablica[i];
                tablica[i] = tablica[i+1];
                tablica[i+1] = temp;
            }
        }
    }

    cout << "Marka:\tRok:\tCena:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << tablica[i].marka << "\t" << tablica[i].rok << "\t" << tablica[i].cena << endl;
    }

    return 0;
}
