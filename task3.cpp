#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::scientific | ios::showpoint| ios::uppercase);
    cout << 100.0;
    return 0;
}