#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Number
{
    int number;
    int max;

public:
    Number(int num);
    Number();
    friend ostream &operator<<(ostream &stream, Number obj);
    friend istream &operator>>(istream &stream, Number &obj);
};
Number::Number()
{
    number = 1;
    max = 1;
}

Number::Number(int num)
{
    number = num;
    if (number > 0){
        max = num;
    }
    else if (number < 0) {
        max = - num; 
    }
    else{
        max = 0;// Програмно 0 в цьому випадку заміняє нескінченність
    }
}

ostream &operator<<(ostream &stream, Number obj)
{
    if (obj.max != 0){
        stream << obj.number << ", max: " << obj.max;
    }
    else{
        stream << obj.number << ", max: infinity";
    }
    return stream;
}
istream &operator>>(istream &stream, Number &obj)
{
    cout << "Enter the number: ";
    stream >> obj.number;
    if (obj.number > 0){
        obj.max = obj.number;
    }
    else if (obj.number < 0) {
        obj.max = - obj.number; 
    }
    else{
        obj.max = 0;// Програмно 0 в цьому випадку заміняє нескінченність
    }
    return stream;
}

int main()
{
    Number n1(10), n2(-10), n3;
    cin >> n3;
    cout << n1 << endl
         << n2 << endl
         << n3;
    return 0;
}