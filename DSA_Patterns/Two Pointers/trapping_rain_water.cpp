#include<iostream>
#include<vector>
using namespace std;
int maxRainWaterTrapped(vector<int>h)
{
    int i = 0, j = h.size() - 1;
    int rmax = 0, lmax = 0;
    int ans = 0;
    while(i < j)
    {
        lmax = max(lmax,h[i]);
        rmax = max(rmax,h[j]);
        if(lmax < rmax) 
        {
            ans+= lmax - h[i];
            i++;
        }
        else{
            ans+= rmax - h[j];
            j--;
        }
    }
    return ans;
}
int main()
{
    vector<int>v = {4,2,0,3,2,5};
    cout<<maxRainWaterTrapped(v);
    return 0;
}