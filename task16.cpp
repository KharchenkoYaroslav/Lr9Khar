#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double number = 1000.5364;


    ios save1(NULL);
    save1.copyfmt(cout);
    ios::fmtflags save1F = cout.flags();

    cout << right << setw(20) << setfill('*') << fixed << setprecision(2) << number << endl;

    ios save2(NULL);
    save2.copyfmt(cout);
    ios::fmtflags save2F = cout.flags();

    cout << "The fill character is " << save2.fill() << endl;

    if (save2F & ios::right) {
        cout << "text-align: right" << endl;
    } else {
        cout << "text-align: left" << endl;
    }

    cout.copyfmt(save1);

    cout << number << endl;

    cout << "The fill character is " << save1.fill() << endl;

    if (save1F & ios::right) {
        cout << "text-align: right" << endl;
    } else {
        cout << "text-align: left" << endl;
    }

    return 0;
}