#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int x;
    int const k = 50;
    int array[k];

    for (int i = 0; i < k; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] << "  ";
    }
    cout << endl << endl;


    for (int j = 0; j < k; j++)
    {
      //  cout << array[j] << endl;
        for (int i = j+1; i < k; i++){
        if (array[j] > array[i])
        {   x = array[j];
            array[j] = array[i];
            array[i] = x;
        }
    }
       cout << array[j] << endl;
    }

    return 0;
}
