#include<iostream>
#include<vector>
using namespace std;
int LargestSubarrayOfSumK(vector<int>v,int k)
{
        int i = 0, j = 0, n = v.size();
        int sum = 0, ans = INT_MIN;
        while(j < n)
        {
            sum+=v[j];
            if(sum > k) sum-=v[i++];
            if(sum == k)
            {
                ans = max(ans,(j-i+1));
                sum-=v[i];
                i++;
            }
            j++;
        }
        return ans;
}
int main()
{
    vector<int>nums = {1,6,3,5,1,2};
    int k = 6;
    cout<<LargestSubarrayOfSumK(nums,k);
    return 0;
}