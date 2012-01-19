#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;


int main()
{
   int const k = 10;
   double array[k][k];

   for(int i = 0; i < k; i++)
   {
       for(int j = 0; j < k; j++)
       {
           // 5n / (n + 1)
           array[i][j] = (5 * (i * k + j)) / double((i * k + j) + 1);
       }
   }

   for(int i = 0; i < k; i++)
   {
       for(int j = 0; j < k; j++)
       {
           cout << array[i][j] << "\t";
       }
       cout << endl;
   }

    double suma1 = 0, suma2 = 0;

    for(int i = 0; i < k; i++)
    {
        suma1 = suma1 + array[i][i];
    }
     for(int j = k-1; j >= 0; j--)
        {
           suma2 = suma2 + array[j][k-(j+1)];
        }

    cout << suma1 << endl;
    cout << suma2 << endl << endl;

    for(int i = 0; i < k/2; i++)
    {
        double x = array[i][i];
        array[i][i] = array[k-(i+1)][k-(i+1)];
        array[k-(i+1)][k-(i+1)] = x;
    }

     for(int j = k-1; j >= (k)/2; j--)
    {
        double x = array[j][k-(j+1)];
        array[j][k-(j+1)] = array[k-(j+1)][j];
        array[k-(j+1)][j] = x;
    }

     for(int i = 0; i < k; i++)
   {
       for(int j = 0; j < k; j++)
       {
           cout << array[i][j] << "\t";
       }
       cout << endl;
   }

    double const a = 3.5;
    double const b = 4.5;
    int liczba = 0;

      for(int i = 0; i < k; i++)
   {
       for(int j = 0; j < k; j++)
       {
            if(i + j < k-1){
            if(j > i)
            {
                if(array[i][j] > a)
                if(array[i][j] < b)
                {
                liczba = liczba + 1;
                }
            }
            }
       }
   }
        cout << "W przedziale (3.5; 4.5) znajduje siê " << liczba << " liczb." << endl;

}
