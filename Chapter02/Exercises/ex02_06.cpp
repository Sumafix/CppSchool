// ex02_06.cpp

#include <iostream>
double lghtToAstr(double);

int main()
{
    using namespace std;

    cout << "Podaj liczbe lat swietlnych: ";
    double LghtYr;
    cin >> LghtYr;
    cout << LghtYr << " lat swietlnych = " << lghtToAstr(LghtYr)
        << " jednostek astronomicznych." << endl;
    return 0;
}

double lghtToAstr(double lght)
{
    return lght * 63240;
}