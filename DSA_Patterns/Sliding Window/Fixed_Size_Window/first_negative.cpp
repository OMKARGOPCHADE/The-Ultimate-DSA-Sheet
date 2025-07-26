// Given an array arr[]  and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

// Note: If a window does not contain a negative integer, then return 0 for that window.
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> firstNegInt(vector<int> &arr, int k)
{
    // write code here
    vector<int> ans;
    int sz = arr.size();
    queue<int> qu;
    // for first window
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
            qu.push(arr[i]);
    }
    if (!qu.empty())
    {
        ans.emplace_back(qu.front());
    }
    else
    {
        ans.emplace_back(0);
    }
    for (int i = 1; i <= sz - k; i++)
    {
        if (!qu.empty() && arr[i - 1] < 0)
        {
            qu.pop();
        }
        if (arr[k + i - 1] < 0)
        {
            qu.push(arr[k + i - 1]);
        }
        if (!qu.empty())
        {
            ans.emplace_back(qu.front());
        }
        else
        {
            ans.emplace_back(0);
        }
    }
    return ans;
}
int main()
{
    vector<int> ans = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    ans = firstNegInt(ans,k);
    for(auto i: ans) cout<<i<<" ";
    return 0;
}