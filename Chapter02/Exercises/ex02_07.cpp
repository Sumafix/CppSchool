// ex02_07.cpp

#include <iostream>
void writeTime(int, int);

int main()
{
    using namespace std;

    cout << "Podaj liczbe godzin: ";
    int hours;
    cin >> hours;
    cout << "Podaj liczbe minut: ";
    int mins;
    cin >> mins;
    writeTime(hours, mins);
    return 0;
}

void writeTime(int hh, int mm)
{
    using namespace std;

    cout << "Czas: " << hh << ":" << mm << endl;
}