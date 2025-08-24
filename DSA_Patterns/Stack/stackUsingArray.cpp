#include <iostream>
using namespace std;
class Stack
{
private:
    int top = -1, sz = 10;
    int St[10];

public:
    void push(int val)
    {
        if (top == sz)
        {
            cout << "Stack Overflow!";
            
        }
         else St[++top] = val;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!";
            return -1;
        }
        return St[top--];
    }
    int top_el()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!";
            return -1;
        }
         return St[top];
    }
    int size()
    {
        return top + 1;
    }
};

int main()
{
    Stack obj;
    obj.push(10);
    obj.push(15);
    obj.push(12);
    obj.push(15);
    obj.push(103);
    obj.push(104);
    cout<<obj.top_el()<<endl;
    cout<<obj.pop()<<endl;
    cout<<obj.top_el();
    return 0;
}