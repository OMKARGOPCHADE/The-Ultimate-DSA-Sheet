#include<iostream>
#include<queue>
using namespace std;
class stack {
    queue<int>qu;
    public:
    void push(int val)
    {
        qu.push(val);
        for(int i = 0; i<qu.size()-1; i++)
        {
            qu.push(qu.front());
            qu.pop();
        }
    }
    int pop()
    {
        if(qu.empty()){
            cout<<"Stack Underflow!";
            return -1;
        }
        int val = qu.front();
        qu.pop();
        return val;
    }
    int top()
    {
        if(qu.empty()){
            cout<<"Stack Underflow!";
            return -1;
        }
        return qu.front();
    }
    int size()
    {
        return qu.size();
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    cout<<st.size()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.top();
    return 0;
}