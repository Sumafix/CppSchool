// modulus.cpp -- używa operatora % do zmiany funtów na kamienie

#include <iostream>

int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Podaj swoja wage w funtach: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;      // całych kamieni
    int pounds = lbs % Lbs_per_stn;     // reszta w funtach
    cout << lbs << " funtow to " << stone
         << " kamieni, " << pounds << " funtow.\n";
    return 0;
}