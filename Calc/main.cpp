#include <iostream>

using namespace std;

int main()
{   int n;
    double a, b, wynik;

    while (true) {
        cout << "Menu:" << "\nDodawanie [1]" << "\nOdejmowanie [2]" <<"\nMno¿enie [3]" << "\nDzielenie [4]" << "\nWyjœcie [5]" << endl;
         cin >> n;
    switch (n)
    {
        case 1:
            cout << "WprowadŸ 2 liczby, które chcesz dodaæ" << endl;

            cin >> a;
            cin >> b;
            wynik = a + b;

          cout << a << " + " << b << " = " << wynik << endl;

            cout <<  endl << "Menu:" << "\nDodawanie [1]" << "\nOdejmowanie [2]" <<"\nMno¿enie [3]" << "\nDzielenie [4]" << "\nWyjœcie [5]" << endl;
            cout << endl << "Wybierz opcjê z menu" << endl << endl;
            break;

        case 2:
            cout << "WprowadŸ 2 liczby, które chcesz odj¹æ" << endl;

            cin >> a;
            cin >> b;
            wynik = a - b;

            cout << a << " - " << b << " = " << wynik << endl;

           cout << endl << "Menu:" << "\nDodawanie [1]" << "\nOdejmowanie [2]" <<"\nMno¿enie [3]" << "\nDzielenie [4]" << "\nWyjœcie [5]" << endl;
            cout << endl << "Wybierz opcjê z menu" << endl << endl;
            cin >> n;
            break;

        case 3:
            cout << "WprowadŸ 2 liczby, które chcesz pomnozyæ" << endl;

            cin >> a;
            cin >> b;
            wynik = a * b;

            cout << a << " * " << b << " = " << wynik << endl;

           cout << endl << "Menu:" << "\nDodawanie [1]" << "\nOdejmowanie [2]" <<"\nMno¿enie [3]" << "\nDzielenie [4]" << "\nWyjœcie [5]" << endl;
            cout << endl << "Wybierz opcjê z menu" << endl << endl;
            cin >> n;
            break;



        case 4:
            cout << "WprowadŸ 2 liczby, które chcesz podzieliæ" << endl;

            cin >> a;
            cin >> b;
            if (b == 0)
            {
                cout << endl << "Dzielenie niewykonalne" << endl;
            } else
            {
            wynik = a + b;
            cout << a << " / "<< b << " = " << wynik << endl;
            }

        cout << endl << "Menu:" << "\nDodawanie [1]" << "\nOdejmowanie [2]" <<"\nMno¿enie [3]" << "\nDzielenie [4]" << "\nWyjœcie [5]" << endl;
        cout << endl << "Wybierz opcjê z menu" << endl << endl;
        cin >> n;
            break;

        case 5:
            return 0;
            break;

        default:
            cout << "Nie ma takiej opcji" << endl;
            break;
    }
    }

return 0;
}
