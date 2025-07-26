#include<iostream>
#include<vector>
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0;
        double sum = 0;
        int sz = nums.size();
        for(int i = 0; i<k; i++)
        {
            sum+=nums[i];
        }
        ans = double( (sum) / double(k));
        for(int i = 1; i<=sz-k; i++)
        {
            sum -= nums[i-1];
            sum+= nums[k+i-1];
            double t = double( sum / double(k) );
            ans = max(ans,t);
        }
        return ans;
    }
int main()
{
    vector<int>nums = {1,12,-5,-6,50,3};
    int k = 4;
    cout<<findMaxAverage(nums,k);
    return 0;
}