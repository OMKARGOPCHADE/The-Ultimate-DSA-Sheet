// 1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int numOfSubarrays(vector<int>& arr, int k, int th) {
        int i = 0, j = 0; 
        int n = arr.size();
        int sum = 0, ans = 0;
        while(j < n)
        {
            sum+= arr[j];
            if(j - i + 1 == k)
            {
                if((sum / k) >= th)ans++;
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return ans;
    }
int main()
{
    vector<int> ans = {12, -1, -7, 8, -15, 30, 16, 28};
    int cnt = numOfSubarrays(ans,3,4);
   cout<<cnt;
    return 0;
}