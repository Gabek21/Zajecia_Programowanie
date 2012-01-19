#include <iostream>
#include <fstream>

using namespace std;

int Count_number_of_lines (fstream &is)
{
    is.clear();
    is.seekg(0);
    int number_of_lines = 0;
    string line;
    while (is.good())
    {
        number_of_lines++;
        getline(is, line);
    }
    return number_of_lines;
}

double Count_number_of_chars (fstream &is)
{
    is.clear();
    is.seekg(0);
    double number_of_chars = 0;
    while (is.good())
    {
        number_of_chars++;
        is.get();
 //       cout << number_of_chars << endl;
    }
    return number_of_chars;
}

double File_size (fstream &is)
{
    double size;
    size = double (Count_number_of_chars(is)) / 1024.0;
    return size;
}

void Results_end (fstream &is)
{   int nroflines = Count_number_of_lines(is);
    int numberofchars = Count_number_of_chars(is);
    double size = File_size(is);
    is.clear();
    is.seekg(ios::end);
    is << endl << "***************************" << endl;
    is << "Liczba wierszy: " << nroflines << endl;
    is << "liczba znaków: " << numberofchars << endl;
    is << "Wielkoœæ pliku: " << size << endl;
    is << "***************************" << endl;
}

void Results_beginning (fstream &is)
{   int nroflines = Count_number_of_lines(is);
    int numberofchars = Count_number_of_chars(is);
    double size = File_size(is);
    is.clear();
    is.seekg(0);
    is << endl << "***************************" << endl;
    is << "Liczba wierszy: " << nroflines << endl;
    is << "liczba znaków: " << numberofchars << endl;
    is << "Wielkoœæ pliku: " << size << endl;
    is << "***************************" << endl;
}

int main()
{
    string File_Name;
    cout << "WprowadŸ nazwê pliku do analizy (Musi znajdowaæ siê w œcie¿ce gdzie uruchamiamy program)" << endl;
    cin >> File_Name;
    fstream is(File_Name.c_str());
    if (!is.is_open())
    {
        cout << "Nie mo¿na odczytaæ pliku b¹dŸ plik nie istnieje" << endl;
        return 0;
    }

    Results_end(is);

/*
    cout << "Liczba wierszy: " << Count_number_of_lines(is) << endl;
    cout << "Liczba znaków: " << Count_number_of_chars(is) << endl;
    cout << "Rozmiar pliku: " << File_size(is) << " Kb" << endl;
*/
    is.close();
    return 0;
}
