#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
 long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        long long sum = 0, ans = 0;
        unordered_map<long,long>hm;
        while(j < n)
        {
            sum+=nums[j];
            hm[nums[j]]++;
            if(hm[nums[j]]>1)
            {
                while(hm[nums[j]]>1)
                {
                    sum-=nums[i];
                    hm[nums[i]]--;
                    i++;
                }
            }
            else if((j-i+1)==k)
            {
                ans = max(ans,sum);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return ans;
    }
int main()
{
    vector<int>nums = {1,5,4,2,9,9,9};
    int k = 3;
    cout<<maximumSubarraySum(nums,k);
    return 0;
}