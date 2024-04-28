#include <iostream>
using namespace std;

int main()
{
    ios::fmtflags f = cout.flags();
    cout.unsetf(ios::dec);
    cout.setf(ios::showbase | ios::hex);
    cout << 100 << endl;
    cout.flags(f);
    cout << 100 << endl;
    return 0;
}