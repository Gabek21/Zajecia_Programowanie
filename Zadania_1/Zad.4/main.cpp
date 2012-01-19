#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj liczbê x" << endl;
    cin >> x;

    if (x > 0) {
        cout << "Liczba x jest dodatnia" << endl;
    }   else { if ( x < 0 ) {
            cout << "Liczba x jest ujemna" << endl;
    }       else    {
                cout << "Liczba x jest równa zero" << endl;
    }
    }

    return 0;
}
