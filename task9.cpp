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
    ~strtype() { delete[] p; }
    friend ostream &operator<<(ostream &stream, strtype obj);
};
strtype::strtype(char *ptr)
{
    len = strlen(ptr) + 1;
    p = new char[len];// () замінено на []
    if (!p)
    {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p, ptr);
}

ostream &operator<<(ostream &stream, strtype obj) {
    stream << obj.p << ", " << obj.len;
    return stream;
}

int main()
{
    strtype s1((char *)"This is a test."), s2((char *)"I hate C++!");
    cout << s1 << endl << s2;
    return 0;
}