#include <iostream>

using namespace std;

int main()
{
    double x, wynik;
    cout << "Podaj liczb� zmiennoprzecinkow� x" << endl;
    cin >> x;

    if ( x == 0) {
        cout << "Dzielenie przez 0 jest niewykonalne" << endl;
    }   else {

    wynik = 1 / x;
    cout << wynik << endl;
     }

    return 0;
}
