#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    int const k = 5;
    int array[k][k];

    for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < k; j++)
            {
                array[i][j] = (rand() % 31) - 15;
                cout << array [i][j] << "  ||  ";
            }
            cout << endl;
        }

    return 0;
}
