#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Podaj liczb� x" << endl;
    cin >> x;

    if (x > 0) {
        cout << "Liczba x jest dodatnia" << endl;
    }   else { if ( x < 0 ) {
            cout << "Liczba x jest ujemna" << endl;
    }       else    {
                cout << "Liczba x jest r�wna zero" << endl;
    }
    }

    return 0;
}
