#include <iostream>
using namespace std;
class queue
{
    int start = -1, end = -1;
    int sz = 10, qu[10];
    int curr_size = 0;

public:
    void push(int val)
    {
        if (curr_size == sz)
        {
            cout << "Stack Overflow!";
            exit(0);
        }
        else if(curr_size == 0) start = end = 0;
        else
        {
            end = (end + 1) % sz;

        }
            qu[end] = val;
            curr_size++;
    }
    int pop()
    {
        if (curr_size == 0)
        {
            cout << "Queue Underflow";
            return -1;
        }
        int val = qu[start];
        if (curr_size == 1)
        {
            start = end = 0;
        }
        else
        {
            start = (start + 1) % sz;
        }
        curr_size--;
        return val;
    }
    int top()
    {
        if (curr_size == 0)
        {
            cout << "Queue Underflow";
            return -1;
        }
        return qu[start];
    }
    int size()
    {
        return curr_size;
    }
};
int main()
{
    queue q;
    q.push(10);
    q.push(20);
    cout<<q.top()<<endl;
    q.push(30);
    cout<<q.pop()<<endl;
    cout<<q.top()<<endl;
    return 0;
}