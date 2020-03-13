// ex02_02.cpp

#include <iostream>

int main()
{
    using namespace std;
    cout << "Podaj odleglosc w milach morskich: ";
    double seaMiles;
    cin >> seaMiles;
    cout << seaMiles << " mil morskich = "
        << seaMiles * 1852 << " metrow." << endl;
    return 0;
}