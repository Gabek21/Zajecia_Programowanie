#include <iostream>

using namespace std;

int main()
{   int m, n, wynik;
    cout << "Podaj m" << endl;
    cin >> m;
    cout << "Podaj n" << endl;
    cin >> n;

    wynik = m / n;
    cout << "Wynik dzielenia m przez n wynosi: " << wynik << endl;
    cout << "Reszta z dzielenia m przez n wynosi: " << m % n << endl;


    return 0;
}
