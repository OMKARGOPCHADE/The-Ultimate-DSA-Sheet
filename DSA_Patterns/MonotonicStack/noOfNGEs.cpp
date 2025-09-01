#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>nGEs(vector<int>&nums)
{
    int n = nums.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i = n-1 ; i >=0; i--)
    {
        while(!st.empty() && nums[st.top()]<= nums[i])st.pop();
        ans[i] = st.empty() ? 0:st.top() - i;
        st.push(i);
    }
    return ans;
}
int main()
{
    vector<int>v = {1,2,1};
    v = nGEs(v);
    for(auto i: v) cout<<i<<" ";
    return 0;
}