#include <iostream>
#include <iomanip>
using namespace std;

class pwr
{
    int base;
    int exponent;
    double result; // base to the exponent power
public:
    pwr(int b, int e);
    friend ostream &operator<<(ostream &stream, pwr obj);
    friend istream &operator>>(istream &stream, pwr &obj);
};
pwr::pwr(int b, int e)
{
    base = b;
    exponent = e;
    result = 1;
    for (; e; e--)
        result = result * base;
}

ostream &operator<<(ostream &stream, pwr obj)
{
    stream << obj.base << " ^ " << obj.exponent << " = " << obj.result << endl;
    return stream;
}

istream &operator>>(istream &stream, pwr &obj)
{
    cout << "Enter base and exponent: ";
    stream >> obj.base >> obj.exponent;
    int e = obj.exponent;
    obj.result = 1;
    for (; e; e--)
        obj.result = obj.result * obj.base;
    return stream;
}

int main()
{
    pwr s1(10, 2), s2(1, 1);
    cin >> s2;
    cout << s1 << s2;

    return 0;
}
