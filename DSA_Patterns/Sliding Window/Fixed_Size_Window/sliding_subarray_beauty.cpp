#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
{
    int i = 0, j = 0, n = nums.size();
    vector<int> ans;
    map<int, int> hm;
    while (j < n)
    {
        if (nums[j] < 0)
            hm[nums[j]]++;
        if (j - i + 1 == k)
        {
            int cnt = 0, rs = 0;
            for (int l = -50; l < 0; l++)
            {
                cnt += hm[l];
                if (cnt >= x)
                {
                    rs = l;
                    break;
                }
            }
            ans.emplace_back(rs);
            hm[nums[i]]--;
            i++;
        }
        j++;
    }
    return ans;
}
int main()
{
    vector<int>nums = {1,-1,-3,-2,3};
    int k = 3, x = 2;
    nums = getSubarrayBeauty(nums,k,x);
    for(auto i: nums) cout<<i<<" ";
    return 0;
}