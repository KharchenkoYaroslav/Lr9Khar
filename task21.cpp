#include <iostream>
#include <ctime>
using namespace std;

class ft_to_cms
{
    double feet;
    double cms;

public:
    void set(double f)
    {
        feet = f;
        cms = f * 30.48;
    }
    friend ostream &operator<<(ostream &stream, ft_to_cms &obj);
    friend istream &operator>>(istream &stream, ft_to_cms &obj);
};
ostream &operator<<(ostream &stream, ft_to_cms &obj)
{
    stream << "Feet: " << obj.feet << ", cms: " << obj.cms << endl;
    return stream;
}
istream &operator>>(istream &stream, ft_to_cms &obj)
{
    cout << "Enter feet: ";
    stream >> obj.feet;
    obj.cms = obj.feet * 30.48;
    return stream;
}

int main()
{
    ft_to_cms obj1, obj2;
    obj1.set(10);
    cin >> obj2;
    cout << obj1 << obj2;

    return 0;
}