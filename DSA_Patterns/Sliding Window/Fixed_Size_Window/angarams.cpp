#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
vector<int> findAnagrams(string s, string p)
{
    vector<int>hm(26,0);
    int n = p.length();
    for(int i = 0; i<n; i++) hm[int(p[i]- 97)]++;
    int len = s.length();
    vector<int>v;
    for(int i = 0; i<=len-n; i++)
    {
        vector<int>hmt(26,0);
        for(int j = i; j<(n+i); j++)
        {
            hmt[int(s[j] - 97)]++;
        }
        if(hm == hmt){
             v.emplace_back(i);
        }
    }
    return v;
}
int main()
{
    string s = "cbaebabacd";
    string p = "abc";
    string s1 = "abab";
    string p1 = "ab";
    vector<int>v;
    v = findAnagrams(s,p);
    for(auto i: v)cout<<i<<" ";
    v = findAnagrams(s1,p1);
    cout<<endl;
    for(auto i: v)cout<<i<<" ";
    return 0;
}