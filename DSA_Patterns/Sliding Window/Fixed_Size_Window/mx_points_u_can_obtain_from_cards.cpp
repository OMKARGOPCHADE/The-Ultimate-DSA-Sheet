#include<iostream>
#include<vector>
using namespace std;
  int maxScore(vector<int>& cP, int k) {
        int sum = 0;
        int r = cP.size()-1;
        int mx = 0;
        for(int i = 0; i<k; i++)
        {
            sum+=cP[i];
        }
        mx = sum;
        for(int i = k-1; i>=0; i--)
        {
            sum-=cP[i];
            sum+=cP[r];
            mx = max(mx,sum);
            r--;
        }
        return mx;
    }
int main()
{
    vector<int> nums = {1,2,3,4,5,6,1};
    int k = 3;
    cout<<maxScore(nums,k);
    return 0;
}