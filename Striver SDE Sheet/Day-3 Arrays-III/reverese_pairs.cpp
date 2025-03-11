#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int>temp;
    while(left <= mid && right<= high)
    {
        if(arr[left]<=arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
        }
    }
        while(left <= mid)
    {
            temp.emplace_back(arr[left]);
            left++;
    }
        while(right<= high)
    {
            temp.emplace_back(arr[right]);
            right++;
    }
    for(int i = low; i<=high; i++)
    {
        arr[i] = temp[i-low];
    }
}
int cntCombinations(vector<int>&arr,int low, int mid, int high)
{
    int cnt = 0;
    int right = mid + 1;
    for(int i = low; i<=mid; i++)
    {
        while(right<=high && arr[i] > 2 * (long)arr[right]) right++;
        cnt+= (right - (mid + 1));
    }
    return cnt;
}
int mergeSort(vector<int>&arr, int low, int high)
{
    int cnt = 0;
    if(low>=high)return cnt;
    int mid = (low+high)/2;
    cnt+=mergeSort(arr,low,mid);
    cnt+=mergeSort(arr,mid+1,high);
    cnt+=cntCombinations(arr,low,mid,high);
    merge(arr,low,mid,high);
    return cnt;
}
int reversePairs(vector<int>&arr)
{
    return mergeSort(arr,0,arr.size()-1);
}
int main()
{
    vector<int>arr = {1,2,3,4,5};
    cout<<reversePairs(arr);
    return 0;
}