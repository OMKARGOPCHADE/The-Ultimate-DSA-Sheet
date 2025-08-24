#include<iostream>
#include<vector>
using namespace std;
int mostWater(vector<int>&height)
{
    int i = 0, j = height.size()-1;
    int ans = INT_MIN;
    while(i < j)
    {
        int area = min(height[i],height[j]) * (j-i);
        ans = max(ans,area);
        if(height[i]<height[j])i++;
        else j--;
    }
    return ans;
}
int main()
{
    vector<int>container = {1,8,6,2,5,4,8,3,7};
    cout<<mostWater(container);
    return 0;
}