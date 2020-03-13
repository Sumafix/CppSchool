// ex02_05.cpp

#include <iostream>
double clsToFhr(double);

int main()
{
    using namespace std;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    double tempCls;
    cin >> tempCls;
    cout << tempCls << " stopni Celsjusza to " << clsToFhr(tempCls)
        << " stopni Farhenheita." << endl;
    return 0;
}

double clsToFhr(double temp)
{
    return 1.8 * temp + 32.0;
}