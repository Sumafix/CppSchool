// floatlimit.cpp -- sprawdzamy limity typów zmiennoprzecinkowych

#include <iostream>
#include <cfloat>

int main()
{
    using namespace std;

    cout << "Liczba cyfr znaczacych:" << endl;
    cout << "float: " << FLT_DIG << endl;
    cout << "double: " << DBL_DIG << endl;
    cout << "long double: " << LDBL_DIG << endl << endl;

    cout << "Liczba bitow, na ktorych zapisywana jest mantysa:" << endl;
    cout << "float: " << FLT_MANT_DIG << endl;
    cout << "double: " << DBL_MANT_DIG << endl;
    cout << "long double: " << LDBL_MANT_DIG << endl << endl;

    cout << "Maksymalne i minimalne wartosci wykladnika:" << endl;
    cout << "float: " << FLT_MAX_10_EXP << endl;
    cout << "double: " << DBL_MAX_10_EXP << endl;
    cout << "long double: " << LDBL_MAX_10_EXP << endl << endl;

    cout << "float: " << FLT_MIN_10_EXP << endl;
    cout << "double: " << DBL_MIN_10_EXP << endl;
    cout << "long double: " << LDBL_MIN_10_EXP << endl;
    return 0;
}