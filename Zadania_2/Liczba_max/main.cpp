#include <iostream>

using namespace std;

int main()
{
   int n;
   cout << "WprowadŸ liczbê powtórzeñ n" << endl;
   cin >> n;

   int max_1 = 0;
   int max_2 = 0;

   if (n > 1)
   {    int x;
        cout << "Podaj liczbę" << endl;
        cin >> x;
        max_1 = x;
        cout << "Podaj liczbę" << endl;
        cin >> x;
        if ( x > max_1)
        {
            max_2 = max_1;
            max_1 = x;
        }   else if ( x > max_2)
        {
            max_1 = x;
        }

       for ( int i = 0; i < n - 2; i++ )
       {
        cout << "Podaj liczbę" << endl;
        cin >> x;

            if ( x > max_1 )
            {
                max_1 = x;
            }   else if (x > max_2)
            {
                max_2 = x;
            }

       }
    cout << max_1 << endl << max_2;
   } else
    {
        return 0;
    }



    return 0;
}
