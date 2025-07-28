#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int n = s.length();
    if(n<=1)return n;
    int i = 0, j = 0;
    int ans = 0;
    unordered_map<char,int>hm;
    while(j < n)
    {
        hm[s[j]]++;
        if(hm[s[j]]<=1)
        {
            ans = max(ans,(j-i+1));
        }
        else if(hm[s[j]]>1)
        {
            while(hm[s[j]]>1)
            {
                hm[s[i]]--;
                i++;
            }
        }
        j++;
    }
    return ans;
}
int main()
{
    string s = "abcabcbb";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}