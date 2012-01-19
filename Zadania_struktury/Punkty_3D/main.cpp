#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

#define width 30
#define lenght 20
#define radius 100
#define PI = 3.14159265

using namespace std;

struct Point
{
    double x, y, z;
};

int main()
{
    Point points[width][lenght];

    double rad, alpha, phi;
    srand(time(0));
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            rad = rand()/double (RAND_MAX) * radius;
            alpha = rand( )/double(RAND_MAX)*2*PI;
            phi = rand( )/ double (RAND_MAX)*2*PI;
            points[i][j].x =rad *
            points[i][j].y =rad *
            points[i][j].z =rad *
        }
    }

}
