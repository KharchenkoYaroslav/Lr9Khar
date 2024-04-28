#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double number = 1000.5364;

    cout << left << setw(20) << setfill('*') << fixed << setprecision(2) << number << endl;

    return 0;
}
