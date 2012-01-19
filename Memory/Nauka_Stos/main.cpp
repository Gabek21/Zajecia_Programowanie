#include <iostream>

using namespace std;

struct Point
{
    double x,y;
};

struct Stos
{
    Point *elementy;
    int top;
    int rozmiar;
};

Stos* create_stos()
{
    Stos* s = new Stos;
    s -> top = 0;
    s -> rozmiar = 3;
    s -> elementy = new Point[s -> rozmiar];
    return s;
}

void push(Stos* s, Point p)
{   if (s -> top == s-> rozmiar)
    {
        nowy_stos(s);
    }
    s->elementy[s->top];
    s->top++;
}

void nowy_stos(Stos *s)
{

}


int main()
{
    Point p = {0, 0};
    cout << "Push:" << endl;
    for(int i =0; i < 5; i++)
    {
        cout << "x= " << p.x << "\ty= " << p.y << endl;
    }
    return 0;
}
