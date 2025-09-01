#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int>pSE(vector<int>nums)
{
    int n = nums.size();
    stack<int>st;
    vector<int>ans(n);
    for(int i = 0; i<n; i++)
    {
        while(!st.empty() && st.top()>=nums[i]) st.pop();
        ans[i] = st.empty() ? -1 : st.top();
        st.push(nums[i]);
    }
    return ans;
}
int main()
{
    vector<int>v = {4,5,2,10,8};
    v = pSE(v);
    for(auto i: v) cout<<i<<" ";
    return 0;
}