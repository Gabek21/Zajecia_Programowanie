#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int const n = 10;
    char array[n];
    cout << "Wstaw znak" << endl;
    char wstaw;

    int begin = 0;
    int end = 0;
    while(begin + end < n)
    {
        cin >> wstaw;
        if ((wstaw >= 'A' && wstaw <= 'Z' ) || (wstaw >= 'a' && wstaw <= 'z'))
        {
            array[begin] = wstaw;
            begin = begin + 1;
        }   else
        {
            array[n - (1 + end)] = wstaw;
            end = end + 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;

    int small = 0;
    int big = 0;
    int digit = 0;
    int reszta = 0;

    for(int i = 0; i < n; i++)
    {
          if (array[i] >= 'A' && array[i] <= 'Z')
    {
        big = big + 1;
    }   else if (array[i] >= 'a' && array[i] <='z')
    {
        small = small + 1;
    }   else if (array[i] >= '0' && array[i] <='9')
    {
        digit = digit + 1;
    } else {
    reszta = reszta + 1;
    }
    }

    cout << "Wstawiono:" << endl << "Ma³ych liter: " << small << endl << "Du¿ych liter: " << big << endl;
    cout << "Cyfr: " << digit << endl << "Pozostalych znakow: " << reszta << endl;

    return 0;
}
