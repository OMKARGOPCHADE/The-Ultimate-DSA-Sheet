#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int fN(vector<int>v, int k)
{
    // if(k<0)return k;
    unordered_map<int,int>hm;
    int n = v.size();
    int i = 0, j = 0;
    int ans = 0;
    while(j < n)
    {
        hm[v[j]]++;
        if(hm.size() > k)
        {
            hm[v[i]]--;
            if(hm[v[i]]==0)hm.erase(hm[i]);
            i++;
        }
        ans+= (j-i+1);
        j++;
    }
    return ans;
}
int subarrays_with_k_diff_integers(vector<int>&v,int k)
{
    return fN(v,k) - fN(v,k-1);
}
int main()
{
    vector<int>v = {1,2,1,2,3};
    cout<<subarrays_with_k_diff_integers(v,2);
    return 0;
}