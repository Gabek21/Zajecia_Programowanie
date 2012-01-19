#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;


int main()
{
    int const x = 10;
    int const k = 10;
    int array[x][k];
    int suma1 = 0; // Suma wszyskitch wyrazów wiêkszych od zera
    int liczba = 0; // Liczba wyrazów wiêkszych od zera

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < k; j++)
        {
            array[i][j] = ((rand() % 31 ) - 15);
      //      cout << array [i][j] << "  |  ";
            if ( array [i][j] > 0 )
            {
                suma1 = suma1 + array[i][j];
                liczba = liczba + 1;
            }
        }
      //  cout << endl << endl;

    }
    double srednia;
    srednia = suma1 / liczba;
     cout << "Œrednia wszystkich wyrazów wiêkszych od 0 wynosi:" << endl << srednia << endl << endl;



       for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < k; j++)
        {
            array[i][j] = ((rand() % 31 ) - 15);

                if ( i == 0 )
            {
                array[i][j] = 0;
            }
                if ( i == 9 )
            {
                array[i][j] = 0;
            }
                if ( j == 0 )
            {
                array[i][j] = 0;
            }
                if ( j == 9 )
            {
                array[i][j] = 0;
            }

            cout << array [i][j] << "  |  ";
            if ( array [i][j] > 0 )
            {
                suma1 = suma1 + array[i][j];
                liczba = liczba + 1;
            }
        }
        cout << endl << endl;

    }

    return 0;
}
