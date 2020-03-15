// chartype.cpp -- typ char

#include <iostream>

int main()
{
    using namespace std;
    char ch;                // deklaracja zmiennej typu char

    cout << "Podaj znak: ";
    cin >> ch;
    cout << "Hola! ";
    cout << "Dziekuje za znak " << ch << "." << endl;
    return 0;
}