#include<iostream>
#include<string>
#include<vector>
using namespace std;
string minWindow(string s, string t)
{
    int n = t.size();
    int m = s.size();
    vector<int>hm(26);
    for(int i = 0; i<n; i++) hm[t[i]-'A']++;
    int i = 0, j = 0;
    int cnt = 0;
    int st = -1, minLen = INT_MAX;
    while(j < m)
    {
        if(hm[s[j]-'A']>0) cnt++;
        hm[s[j]-'A']--;
        while(cnt == n)
        {
            if((j-i+1) < minLen)
            {
                minLen = (j-i+1);
                st = i;
            }
            hm[s[i]-'A']++;
            if(hm[s[i]-'A']>0)cnt--;
            i++;
        }
        j++;
    }
    if(st!=-1) return s.substr(st,minLen);
    return "";
}
int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout<<minWindow(s,t);
    return 0;
}