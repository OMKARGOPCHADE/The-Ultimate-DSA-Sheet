#include <iostream>
#include <vector>
using namespace std;
int fN(vector<int> &nums, int k)
{
    if (k < 0)
        return 0;
    int n = nums.size();
    int i = 0, j = 0, ans = 0, sum = 0;
    while (j < n)
    {
        sum += (nums[j] % 2);
        while (sum > k)
        {
            sum -= (nums[i] % 2);
            i++;
        }
        ans += (j - i + 1);
        j++;
    }
    return ans;
}
int binarySubArrays(vector<int> &nums, int goal)
{
    return fN(nums, goal) - fN(nums, goal - 1);
}
int main()
{
    vector<int>nums = {1,1,0,1,0,1,0};
    cout<<binarySubArrays(nums,2);
    return 0;
}