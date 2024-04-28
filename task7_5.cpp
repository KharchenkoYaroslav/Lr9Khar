#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::right);
    cout.precision(5);

    cout << setw(10) << "Number" << setw(10) << "Natural" << setw(10) << "Decimal" << endl;

    for (int i = 2; i <= 100; ++i) {
        cout << setw(10) << i << setw(10) << log(i) << setw(10) << log10(i) << endl;
    }

    return 0;
}