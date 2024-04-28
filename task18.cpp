#include <iostream >
using namespace std;
#define SIZE 10
class stack
{
    char stck[SIZE]; // holds the stack
    int tos;         // index of top -of - stack
public:
    stack();
    void push(char ch); // push character on stack
    char pop();         // pop character from stack
    friend ostream &operator<<(ostream &stream, stack &obj);
};
// Initialize the stack:
stack::stack()
{
    tos = 0;
}
// Push a character
void stack::push(char ch)
{
    if (tos == SIZE)
    {
        cout << "Stack is full\n";
        exit(1); // змінено на exit
    }
    stck[tos] = ch;
    tos++;
}
// Pop a character:
char stack::pop()
{
    if (tos == 0)
    {
        cout << "Stack is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}
ostream &operator<<(ostream &stream, stack &obj)
{
    int top = obj.tos -1;
    while (top != -1)
    {
        stream << obj.stck[top] << " ";
        top--;
    }

    return stream;
}

int main()
{
    stack s;

     for (int i = 0; i < 10; i++)
     {
         s.push('a' + i);
     }

    cout << s;

    return 0;
}