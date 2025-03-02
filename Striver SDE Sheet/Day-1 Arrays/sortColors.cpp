#include<bits/stdc++.h>
using namespace std;
void sort_Colors(vector<int>&nums)
{
    int min = 0, mid = 0, high = nums.size()-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[min],nums[mid]);
            min++,mid++;
        }
        else if(nums[mid]==1)mid++;
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main()
{
    vector<int>nums={0,2,1,0,2,1,0,2,1};
    sort_Colors(nums);
    for(auto i: nums) cout<<i<<" ";
    return 0;
}