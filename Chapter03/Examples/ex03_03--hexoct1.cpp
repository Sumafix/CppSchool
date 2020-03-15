// hexoct1.cpp

#include <iostream>

int main()
{
    using namespace std;

    int chest = 42;                     // dziesiętny literał całkowitoliczbowy
    int waist = 0x42;                   // szesnastkowy literał całkowitoliczbowy
    int inseam = 042;                   // ósemkowy literał człkowitoliczbowy

    cout << "Co za figura!\n";
    cout << "obwod piersi = " << chest << " (42 dziesietnie)\n";
    cout << "talia = " << waist << " (0x42 szesnastkowo)\n";
    cout << "dlugosc nogawki = " << inseam << " (042 osemkowo)\n";
    return 0;
}