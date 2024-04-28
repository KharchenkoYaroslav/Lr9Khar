#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class strtype
{
    char *p;
    int len;

public:
    strtype(char *ptr);
    strtype();
    ~strtype() { delete[] p; }
    friend ostream &operator<<(ostream &stream, strtype obj);
    friend istream &operator>>(istream &stream, strtype &obj);
};
strtype::strtype()
{
    p = (char*)"";
    len = 0;
}

strtype::strtype(char *ptr)
{
    len = strlen(ptr) + 1;
    p = new char[len];
    if (!p)
    {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p, ptr);
}

ostream &operator<<(ostream &stream, strtype obj)
{
    stream << obj.p << ", " << obj.len;
    return stream;
}
istream &operator>>(istream &stream, strtype &obj)
{
    obj.p = new char[100];

    cout << "Enter the string: ";
    stream >> obj.p;
    obj.len = strlen(obj.p);
    return stream;
}

int main()
{
    strtype s1((char *)"This is a test."), s2((char *)"I hate C++!"), s3;
    cin >> s3;
    cout << s1 << endl
         << s2 << endl
         << s3;
    return 0;
}