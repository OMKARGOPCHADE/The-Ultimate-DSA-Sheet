#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int>In, Out; // In-> Input and Out-> Output
    int sz = 0;
    public:
    void push(int val)
    {
        In.push(val);
        sz++;
    }
    int pop()
    {
        if(Out.empty() && In.empty())
        {
            cout<<"Queue Underflow!";
            return -1;
        }
        sz--;
        if(!Out.empty())
        {
            int val = Out.top();
            Out.pop();
            return val;
        }
        while(!In.empty())
        {
            Out.push(In.top());
            In.pop();
        }
        int val = Out.top();
        Out.pop();
        return val;
    }
    int top()
    {
        if(Out.empty() && In.empty())
        {
            cout<<"Queue Underflow!";
            return -1;
        }
        if(!Out.empty())
        {
            int val = Out.top();
            return val;
        }
        while(!In.empty())
        {
            Out.push(In.top());
            In.pop();
        }
        int val = Out.top();
        return val;        
    }
    int size()
    {
        return sz;
    }
};
int main()
{
    queue qu;
    qu.push(40);
    qu.push(50);
    qu.push(60);
    cout<<qu.size()<<endl;
    cout<<qu.top()<<endl;
    cout<<qu.pop()<<endl;
    cout<<qu.size()<<endl;
    cout<<qu.top();
    return 0;
}