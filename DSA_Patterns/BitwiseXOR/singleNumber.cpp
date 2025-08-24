#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>v)
{
    int ans = 0;
    for(auto i: v) ans^=i;
    return ans;
}
int main()
{
    vector<int>v = {2,1,2};
    cout<<singleNumber(v);
    return 0;
}