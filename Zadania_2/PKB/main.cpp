#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    double wzrostc = 1.09;
    double wzrostu = 1.025;
    double Chiny = 3920, USA = 46000;
    int rok = 2010;

    cout << "Rok" << rok << "   PKB Chin: " << Chiny << "   PKB USA: " << USA <<endl;
   while (true)
   {
    Chiny = wzrostc * Chiny;
    USA = wzrostu * USA;
    rok = rok + 1;
    if (rok % 5 == 0) {
    cout << "Rok" << rok << "   PKB Chin: " << Chiny << "   PKB USA: " << USA <<endl;
    }
    if (Chiny > USA)
    {   cout << "Chiny bêd¹ bogatsze od USA w roku" << rok << endl;
        return true;
    }
   }



    return 0;
}
