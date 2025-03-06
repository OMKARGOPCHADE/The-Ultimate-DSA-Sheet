#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int t = (m + n) - n;
    for (int i = 0; i < n; i++)
    {
        nums1[t++] = nums2[i];
    }
    sort(nums1.begin(), nums1.end());
}
int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
     int m = 3;
    vector<int> nums2 = {2,3,5};
     int n = 3;
     merge(nums1,m,nums2,n);
     for(auto i: nums1) cout<<i<<" ";
    return 0;
}