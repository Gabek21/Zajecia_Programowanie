#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "Wprowad� znak" << endl;
    cin >> a;

    if (a >= 'A' && a <='Z' ) {
    cout << "Du�a litera"<< endl;
    } else

        if (a >= '0' && a <='9')
    {
        cout << "Liczba" << endl;
    } else
        if (a >= 'a' && a <='z')
    {
        cout <<"Ma�a litera" << endl;
    } else
    {
        cout << "Inny znak" << endl;

    }
    return 0;
}
