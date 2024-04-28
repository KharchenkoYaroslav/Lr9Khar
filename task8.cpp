#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << resetiosflags(ios::dec) << setiosflags(ios::showbase | ios::hex) << 100;
    return 0;
}