#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
class stack{
    Node* tp;
    int sz = 0;
    public:
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = tp;
        tp = temp;
        sz++;
    }
    int top()
    {
        if(tp==nullptr){
            cout<<"Stack Underflow!";
             return -1;
        }
        return tp->data;
    }
    int pop()
    {
        if(tp==nullptr){
            cout<<"Stack Underflow!";
             return -1;
        }
        Node* temp = tp;
        tp = tp->next;
        int val = temp->data;
        delete temp;
        sz--;
        return val;
    }
    int size()
    {
        return sz;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top();
    st.push(40);
    cout<<st.pop();
    cout<<st.top();
    return 0;
}