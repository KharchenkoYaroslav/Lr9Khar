#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double number = 1000.5364;
    cout.setf(ios::left | ios::fixed);
    cout.width(20);
    cout.fill('*');
    cout.precision(2);

    cout << number << endl;

    return 0;
}