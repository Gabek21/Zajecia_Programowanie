#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y, z, wynik;
    cin >> x;
    cin >> y;
    cin >> z;
    wynik = sqrt(3+(x+2*y)^2)+z;
    cout << wynik << endl;
    return 0;
}
