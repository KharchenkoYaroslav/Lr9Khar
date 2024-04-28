#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;
#define WIDTH 80

void center(char *s);

int main()
{
    char *s = (char *)"Hello world";
    center(s);
    return 0;
}
void center(char *s)
{
    for (int i = 0; i < WIDTH; i++)//для наглядної ілюстрації меж
    {
        cout << "-";
    }
    cout << endl;

    int this_width = strlen(s);
    cout.width(((double)WIDTH / 2) + ((double)this_width / 2));
    cout.setf(ios::right);
    cout << s << endl;

    for (int i = 0; i < WIDTH; i++)//для наглядної ілюстрації меж
    {
        cout << "-";
    }
    cout << endl;
}