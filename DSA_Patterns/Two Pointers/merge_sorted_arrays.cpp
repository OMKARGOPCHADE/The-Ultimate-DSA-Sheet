#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&nums1,int m , vector<int>&nums2, int n)
{
    int i = m-1, j = n - 1;
    int idx = (m+n)-1;
    while(i>=0 && j>=0)
    {
        if(nums1[i]>=nums2[j])
        {
            nums1[idx] = nums1[i];
            i--,idx--;
        }
        else{
            nums1[idx] = nums2[j];
            j--,idx--;
        }

    }
    while(j>=0)
    {
        nums1[idx] = nums2[j];
        idx--,j--;
    }
}
int main()
{
    vector<int>v1(6);
     v1[0] = 4, v1[1] = 5, v1[2] = 6;
    vector<int>v2 = {1,2,3};
    merge(v1,3,v2,3);
    for(auto i: v1) cout<<i<<" ";
    return 0;
}