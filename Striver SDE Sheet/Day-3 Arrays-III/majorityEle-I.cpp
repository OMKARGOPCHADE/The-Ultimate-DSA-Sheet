#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>&nums)
{
    int n = nums.size();
    int element = 0, cnt = 0;
    for(int i = 0; i<n; i++)
    {
        if(cnt==0)
        {
            cnt = 1; 
            element = nums[i];
        }
        else if(nums[i]==element)cnt++;
        else cnt--;
    }
    //check for safer side
    cnt = 0;
    for(int i = 0; i<n; i++)
    {
        if(nums[i]==element)cnt++;
    }
    if(cnt > (n/2))return element;
    return -1;
}
int main()
{
    vector<int> nums = {1,2,1};
    cout<<majorityElement(nums);
    return 0;
}