#include<iostream>
#include<vector>
using namespace std;
void moveZeros(vector<int>&v)
{
    int i = 0, n = v.size();
    int j = 0;
    while(i < n && j < n)
    {
        while(i < n && v[i]!=0)i++;
        j = i + 1;
        while(j < n && v[j]==0)j++;
        if(j < n && i < n) swap(v[i],v[j]);
    }
}
int main()
{
    vector<int>v = {1,8,0,2,0,4,0,3,0};
    moveZeros(v);
    for(auto i: v) cout<<i<<" ";
    return 0;
}