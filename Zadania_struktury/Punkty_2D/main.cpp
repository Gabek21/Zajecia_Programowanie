#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

int main()
{
    int const n = 5;
    Point array[n];
    Point punkt;
    double distance = 10;

    int j = 0;
    for(int i = 0; i + j < n;)
    {
        cout << "Wczytaj punkt" << endl << "Podaj x" << endl;
        cin >> punkt.x;
        cout << "Podaj y" << endl;
        cin >> punkt.y;
        if((pow(punkt.x,2)+pow(punkt.y,2)) < pow(distance,2))
        {
            array[i] = punkt;
            i++;
        }   else
        {
            array[n - (1 + j)] = punkt;
            j++;
        }
    }

    cout << "Punkty znajduj¹ce siê w tablicy:" << endl;
    cout << "x\ty" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i].x << "\t" << array[i].y << endl;
    }


    return 0;
}
