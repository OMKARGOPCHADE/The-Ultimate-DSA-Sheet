#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElements(vector<int>&nums)
{
    int n = nums.size();
    int cnt1 = 0, cnt2 = 0;
    int ele1 = INT_MIN , ele2 = INT_MIN;
    for(int i =0; i<n; i++)
    {
        if(cnt1 == 0 && nums[i]!=ele2)
        {
            cnt1 = 1;
            ele1 = nums[i];
        }
        else if(cnt2 == 0 && nums[i]!= ele1)
        {
            cnt2 = 1;
            ele2 = nums[i];
        }
        else if(nums[i]==ele1)cnt1++;
        else if(nums[i]==ele2)cnt2++;
        else cnt1--,cnt2--;
    }
    cnt1 = 0, cnt2 = 0;
    for(int i =0; i<n; i++)
    {
        if(nums[i]==ele1)cnt1++;
        else if(nums[i]==ele2)cnt2++;
    }
    if(cnt1 > (n/3) && cnt2 > (n/3))
        return {ele1,ele2};
    if(cnt1 > (n/3))return {ele1};
    if(cnt2 > (n/3))return {ele2};
return {};
}
int main()
{
    vector<int>v = {1,2,1,2,1,21,3};
    v = majorityElements(v);
    for(auto i: v)cout<<i<<" ";

    return 0;
}