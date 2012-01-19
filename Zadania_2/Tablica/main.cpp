#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{   int const SIZE = 2000;
    int array[2000];
    srand(time(0));

    int suma;
    int a = 0, b = 0, c = 0, d = 0;
    for ( int i = 0 ; i < SIZE ; i++)
    {
        array[i] = 6000 * ( rand() / double (RAND_MAX) ) - 3000 ;
        cout << array[i] << endl;
        suma = suma + array[i];

        if ( array[i] > 0)
        {
            a = a + 1;
        }

        if ( array[i] < -1000)
        {
            b = b + 1;
        }

        c = suma/SIZE;
    }

    cout << "Suma wszystkich wyrazów:  " << suma << endl << "Liczba wszystkich wyrazów wiêkszych od zera: " << a << endl << "Liczba wszystkich wyrazów mniejszych od -1000: " << b << endl;
    cout << "Œrednia wszystkich wyrazów: " << c << endl;
    return 0;
}
