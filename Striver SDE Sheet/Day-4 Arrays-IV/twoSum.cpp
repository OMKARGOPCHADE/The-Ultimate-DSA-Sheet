#include <bits/stdc++.h>
using namespace std;
vector<int> two_Sum(vector<int>&arr,int target)
{
    int n = arr.size();
    unordered_map<int,int>hm;
    for(int i = 0; i<n; i++)
    {
        if(hm[target - arr[i]]!=0)
        {
            return {hm[target - arr[i]] - 1, i};
        }
        else hm[arr[i]] = i + 1;
    }
    return {-1,-1};
}
int main()
{
    vector<int>arr = {2,3,5,7,8,9};
    arr = two_Sum(arr,15);
    for(auto i: arr) cout<<i<<" ";
    return 0;
}