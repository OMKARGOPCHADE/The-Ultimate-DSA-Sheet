#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// find next greater element in circular manner. i to n-1 to i-1(1 to n-1 to 0)
vector<int>nGE(vector<int>&nums)
{
    int n = nums.size();
    vector<int>ans(n);
    stack<int>st;
    for(int i = (n*2)-1; i>=0; i--)
    {
        while(!st.empty() && st.top()<= nums[i%n]) st.pop();
        if(i<n)
        {
            if(st.empty()) ans[i] = -1;
            else ans[i] = st.top();
        }
        st.push(nums[i%n]);
    }
    return ans;
}
int main()
{
    vector<int>v = {1,2,1};
    v = nGE(v);
    for(auto i: v) cout<<i<<" ";
    return 0;
}