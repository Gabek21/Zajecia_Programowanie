#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

#define PI 3.14159265

using namespace std;

struct Point
{
    double x, y, z;
};

int main()
{
  Point center_point = {10, 7, 5};

  int const n = 10;
  int const radius = 5;

  Point point[n];
  Point temp;

  double rad, alpha, phi;
  for (int i =0; i < n; i++)
  {
      rad= sqrt(rand() /double(RAND_MAX) * radius*radius);
      alpha= sqrt(rand() / double(RAND_MAX) *4*PI*PI);
      phi= sqrt(rand() / double(RAND_MAX) * 4*PI*PI);

      temp.x = (rad * sin(alpha) * cos(alpha));
      temp.y = (rad * sin(alpha) * sin(phi));
      temp.z = (rad * cos(alpha));

      point[i].x = temp.x + center_point.x;
      point[i].y = temp.y + center_point.y;
      point[i].z = temp.z + center_point.z;
  }

    cout << "Punkty w tablicy:" << endl << "x: " << "\ty: " << "\tz: " <<endl;
    for (int i = 0; i < n; i++)
    {
        cout << point[i].x << "\t" << point[i].y << "\t" << point[i].z << endl;
    }

  // Sortowanie
    for (int i = 0; i < n-1; i++)
    {

        for(int j = i+1; j < n; j++)
    {
        Point temp;

        double distance = sqrt(pow((point[i].x-center_point.x),2) + pow((point[i].y-center_point.y),2)+ pow((point[i].z-center_point.z),2));
        double distance_j = sqrt(pow((point[j].x-center_point.x),2) + pow((point[j].y-center_point.y),2)+ pow((point[j].z-center_point.z),2));
        if (distance > distance_j)
        {
            temp = point[i];
            point[i] = point[j];
            point[j] = temp;
        }
    }
    }

    cout << "Punkty w tablicy:" << endl << "x: " << "\ty: " << "\tz: " <<endl;
    for (int i = 0; i < n; i++)
    {
        cout << point[i].x << "\t" << point[i].y << "\t" << point[i].z << endl;
    }


}
