#include <iostream>

using namespace std;

int main()
{   int n;
    double a, b, wynik;

    while (true) {
        cout << "Menu:" << "\nDodawanie [1]" << "\nOdejmowanie [2]" <<"\nMno�enie [3]" << "\nDzielenie [4]" << "\nWyj�cie [5]" << endl;
         cin >> n;
    switch (n)
    {
        case 1:
            cout << "Wprowad� 2 liczby, kt�re chcesz doda�" << endl;

            cin >> a;
            cin >> b;
            wynik = a + b;

          cout << a << " + " << b << " = " << wynik << endl;

            cout <<  endl << "Menu:" << "\nDodawanie [1]" << "\nOdejmowanie [2]" <<"\nMno�enie [3]" << "\nDzielenie [4]" << "\nWyj�cie [5]" << endl;
            cout << endl << "Wybierz opcj� z menu" << endl << endl;
            break;

        case 2:
            cout << "Wprowad� 2 liczby, kt�re chcesz odj��" << endl;

            cin >> a;
            cin >> b;
            wynik = a - b;

            cout << a << " - " << b << " = " << wynik << endl;

           cout << endl << "Menu:" << "\nDodawanie [1]" << "\nOdejmowanie [2]" <<"\nMno�enie [3]" << "\nDzielenie [4]" << "\nWyj�cie [5]" << endl;
            cout << endl << "Wybierz opcj� z menu" << endl << endl;
            cin >> n;
            break;

        case 3:
            cout << "Wprowad� 2 liczby, kt�re chcesz pomnozy�" << endl;

            cin >> a;
            cin >> b;
            wynik = a * b;

            cout << a << " * " << b << " = " << wynik << endl;

           cout << endl << "Menu:" << "\nDodawanie [1]" << "\nOdejmowanie [2]" <<"\nMno�enie [3]" << "\nDzielenie [4]" << "\nWyj�cie [5]" << endl;
            cout << endl << "Wybierz opcj� z menu" << endl << endl;
            cin >> n;
            break;



        case 4:
            cout << "Wprowad� 2 liczby, kt�re chcesz podzieli�" << endl;

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

        cout << endl << "Menu:" << "\nDodawanie [1]" << "\nOdejmowanie [2]" <<"\nMno�enie [3]" << "\nDzielenie [4]" << "\nWyj�cie [5]" << endl;
        cout << endl << "Wybierz opcj� z menu" << endl << endl;
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
