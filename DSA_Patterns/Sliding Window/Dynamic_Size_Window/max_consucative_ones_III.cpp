// LeetCode : 1004. Max Consecutive Ones III
#include <iostream>
#include <vector>
using namespace std;
int longestOnes(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = 0, j = 0;
    int ans = 0;
    int zeros = 0;
    while (j < n)
    {
        if (nums[j] == 0)
            zeros++;
        if (zeros <= k)
        {
            ans = max(ans, (j - i + 1));
        }
        else if (zeros > k)
        {
            while (zeros > k)
            {
                if (nums[i] == 0)
                    zeros--;
                i++;
            }
        }
        j++;
    }
    return ans;
}
// More Optimal Solution
int longestOnesOptimal(vector<int> &nums, int k)
{
    int n = nums.size();
    int i = 0, j = 0;
    int ans = 0;
    int zeros = 0;
    while (j < n)
    {
        if (nums[j] == 0)
            zeros++;
        if (zeros <= k)
        {
            ans = max(ans, (j - i + 1));
        }
        else if (zeros > k)
        {
            if (nums[i] == 0)
                zeros--;
            i++;
        }
        j++;
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
    cout << longestOnes(nums, k);
    return 0;
}