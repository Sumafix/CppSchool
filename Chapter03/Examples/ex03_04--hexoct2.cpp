// hexoct2.cpp -- pokazuje liczby szesnastkowo i ósemkowo

#include <iostream>

int main()
{
    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Co za figura!" << endl;
    cout << "obwod piersi = " << chest << " (dziesietnie dla 42)" << endl;
    cout << hex;            // manipulator zmieniający system liczbowy
    cout << "talia = " << waist << " (szesnastkowo dla 42)" << endl;
    cout << oct;            // manipulator zmieniający system liczbowy
    cout << "dlugosc nogawki = " << inseam << " (osmekowo dla 42)" << endl;
    return 0;
}