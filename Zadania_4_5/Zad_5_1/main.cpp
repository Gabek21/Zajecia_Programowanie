#include <iostream>
#include <fstream>
using namespace std;

bool is_letter(char c)
{
    if ((c >= 'A') && (c <= 'Z') || (c >= 'a') && (c <= 'z'))
    {
        return true;
    }   else
    {
    return false;
    }
}

bool is_number (char c)
{
    if ((c >= '0') && (c <= '9'))
    {
        return true;
    }
    {
    return false;
    }
}

bool is_arythmetic_operation (char c)
{
    if ((c = '+') && (c = '-') && (c = '*') && (c = '/'))
    {
        return true;
    }
    {
    return false;
    }
}

int main()
{
 /*   ifstream f("tekst");
 plik >> amount zamieniamy na:
f >> amount; */
    string fileName = "chars.txt";
    ifstream is(fileName.c_str());
    if( !is.is_open() )
    {
        cout << "Nie mo¿na otworzyæ pliku " << fileName << endl;
        return 0;
    }   else
    {

    }

    int chars_all = 0;
    int chars_letter = 0;
    int chars_numbers = 0;
    int chars_arythmetic_operation = 0;
    char temp;

    while (is.good())
    {
        chars_all++;
        temp = is.get();
        if (is_letter(temp))
        {
            chars_letter++;
        }   else if (is_number(temp))
        {
            chars_numbers++;
        }   else if (is_arythmetic_operation(temp))
        {
            chars_arythmetic_operation++;
        }

    }
    is.close();

    cout << "Liczba wszystkich znaków: " << chars_all << endl;
    cout << "Liczba liter: " << chars_letter << endl;
    cout << "Liczba cyfr: " << chars_numbers << endl;
    cout << "Liczba znaków operacji matematycznych: " << chars_arythmetic_operation << endl;
    return 0;
}
