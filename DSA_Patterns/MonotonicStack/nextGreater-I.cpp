#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
vector<int> nGE(vector<int>&v1, vector<int>&v2)
{
    stack<int>st;
    int n = v2.size();
    unordered_map<int,int>hm;
    for(int i = 0; i<v1.size(); i++)
    {
        hm[v1[i]] = i+1;
    }
    for(int i = n-1; i>=0; i--)
    {
        while(!st.empty() && st.top()<=v2[i]) st.pop();
        if(hm[v2[i]]!=0)
        {
            if(st.empty()) v1[hm[v2[i]]-1] = -1;
            else{
                v1[hm[v2[i]]-1] = st.top();
            }
        }
        st.push(v2[i]);
    }
    return v1;
}
int main()
{
    vector<int>nums1,nums2;
    nums1 = {4,1,2}, nums2 = {1,3,4,2};
    nums1 = nGE(nums1,nums2);
    for(auto i:nums1) cout<<i<<" ";
    return 0;
}