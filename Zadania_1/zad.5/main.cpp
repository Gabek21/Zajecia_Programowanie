#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "WprowadŸ liczbê a." << endl;
        cin >> a;
        b = a % 2;
    if ( b == 0 ) {
        cout << "Liczba a jest parzysta." <<endl;
    } else
    {
        cout << "liczba a jest nieparzysta.";
    }

    return 0;
}
