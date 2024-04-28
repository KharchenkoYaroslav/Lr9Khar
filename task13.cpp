#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int number = 100;

    
    cout << "У десятковій системі числення: " << number << endl;
    cout.unsetf(ios::dec);
    cout.setf(ios::hex);
    cout << "У шістнадцятковій системі числення: "  << number << endl;
    cout.unsetf(ios::hex);
    cout.setf(ios::oct);
    cout << "У вісімковій системі числення: "  << number << endl;

    return 0;
}