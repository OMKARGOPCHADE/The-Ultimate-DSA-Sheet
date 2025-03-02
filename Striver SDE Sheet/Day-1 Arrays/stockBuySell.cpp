#include<bits/stdc++.h>
using namespace std;
int minMax(vector<int>&prices)
{
    int ans = 0;
    int min_val = prices[0];
    int n = prices.size();
    for(int i = 0; i<n; i++)
    {
        int t = prices[i] - min_val;
        ans = max(ans,t);
        min_val = min(min_val,prices[i]);
    }
    return ans;
}
int main()
{
    vector<int>nums = {1,3,4,67,2,6,78,2,56};
    cout<<minMax(nums);
    return 0;
}