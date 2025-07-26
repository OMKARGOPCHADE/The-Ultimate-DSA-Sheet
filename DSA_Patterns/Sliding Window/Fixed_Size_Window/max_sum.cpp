#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int k = 4;
    vector<int>nums = {3,8,2,5,7,6,12};
    int n = nums.size();
    int sum = 0, max_v = 0;
    for(int i = 0; i<k; i++)
    {
        sum+=nums[i];
    }
    max_v = sum;
    for(int i = 1; i<=n-k; i++)
    {
        cout<<sum<<" ";
        sum-=nums[i-1];
        sum+=nums[k+i-1];
        max_v = max(max_v,sum);
    }
    cout<<endl<<max_v;
    return 0;
}