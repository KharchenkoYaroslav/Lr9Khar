#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::right);
    cout.precision(5);

    cout.width(10);
    cout << "Number";
    cout.width(10);
    cout << "Natural";
    cout.width(10);
    cout << "Decimal" << endl;

    for (int i = 2; i <= 100; ++i) {
        cout.width(10);
        cout << i;
        cout.width(10);
        cout << log(i); 
        cout.width(10);
        cout << log10(i) << endl;
    }

    return 0;
}