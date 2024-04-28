#include <iostream>
#include <ctime>
using namespace std;

class Watch {
private:
    time_t currentTime;

public:
    Watch() {
        time(&currentTime);
    }
    friend ostream &operator<<(ostream &stream, Watch &obj);
};
ostream &operator<<(ostream &stream, Watch &obj)
{
    stream << "Current time: " << ctime(&obj.currentTime);
    return stream;
}

int main() {
    Watch time; 
    cout << time;

    return 0;
}