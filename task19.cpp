#include <iostream>
using namespace std;

class Box {
private:
    int size;

public:
    Box() : size(0) {}

    Box(int s) : size(s) {}

    friend ostream &operator<<(ostream &stream, Box obj);

    void drawBox() const {
        
    }
};
ostream &operator<<(ostream &stream, Box obj)
{
    for (int i = 0; i < obj.size; ++i) {
            for (int j = 0; j < obj.size; ++j) {
                stream << (char)1 << ' ';
            }
            stream << endl;
        }
    return stream;
}

int main() {
    Box s(5); 
    cout << s;

    return 0;
}