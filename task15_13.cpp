#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    int number = 100;

    cout << "У десятковій системі числення: " << dec << number << endl;

    cout << "У шістнадцятковій системі числення: " << hex << number << endl;

    cout << "У вісімковій системі числення: " << oct << number << endl;

    return 0;
}