#include <iostream>

using namespace std;

void swap(int *x, int *y)
{   int a;
    a = *x;
    *x = *y;
    *y = a;
}

void swap2(int &x, int &y)
{
    int a = x;
    x = y;
    y = a;
}

int main()
{

    int x = 2;
    int y = 10;
    cout << "x= " << x << "\ty= " << y << endl;
 //   cout << "x= " << *x << endl << "y= " << *y << endl;

    swap(x,y);

    cout << "x= " << x << "\ty= " << y << endl;
  //  cout << "x= " << *x << endl << "y= " << *y << endl;

   swap2(&x,&y);

    cout << "*x= " << x << endl << "*y= " << y << endl;
  //  cout << "x= " << *x << endl << "y= " << *y << endl;


    return 0;
}
