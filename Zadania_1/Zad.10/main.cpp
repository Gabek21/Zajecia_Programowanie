#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    double x, wynik;
    cout << "Podaj liczbê x" << endl;
    cin >> x;

    if ( x >= 0)
    {
        wynik = ( sqrt(x) + x ) / ( 2 + x );
    } else
    {
        wynik = 0;
    }

    cout << "Wynik: " << wynik << endl;
    return 0;
}
