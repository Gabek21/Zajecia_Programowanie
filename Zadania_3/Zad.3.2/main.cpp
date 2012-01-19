#include <iostream>
#include <cstdlib>

using namespace std;



int main()
{
    int SIZE = 10 ;
    int array[SIZE];
    int a, b;


    while (true)
    {
    cout << "Menu: " << "\nNowa gra [1]" << "\nWyjdŸ [2]" << endl << endl << "Wybierz 1-2" << endl;
    cin >> a;
    switch (a)
    {
        case 1:
         for (int i = 0; i < 3; i++)
    {
        cout << "Losowanie" << endl;
        array[i] = ( rand() % 21 );
        cout << array[i] << endl;
        cout << "Zgadnij liczbê" << endl;
        cin >> b;

        if ( b == array[i] )
        {
            cout << "Wygra³eœ!" << endl;

        }   else
        {
            cout << "Nie trafi³eœ!" << endl;

                if ( i == 2 )
                {
                    cout << "Przegra³eœ!" << endl << endl;
                }
        }
    }
        break;

        case 2:
        return 0;
        break;
    }
    }

    return 0;
}
