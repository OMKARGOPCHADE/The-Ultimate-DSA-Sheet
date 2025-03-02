#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    // Kadane's Algorithm
    int sum = 0;
    int ans = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        ans = max(sum, ans);
        if (sum < 0)
            sum = 0;
    }
    return ans;
}
int main()
{
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
    return 0;
}