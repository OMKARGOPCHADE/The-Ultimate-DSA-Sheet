#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int longestKSubstr(string &s, int k)
{
    int i = 0, j = 0, n = s.length();
    int ans = -1;
    unordered_map<char, int> hm;
    while (j < n)
    {
        hm[s[j]]++;
        if (hm.size() == k)
        {
            ans = max(ans, (j - i + 1));
        }
        else if (hm.size() > k)
        {
            while (hm.size() > k)
            {
                hm[s[i]]--;
                if (hm[s[i]] == 0)
                {
                    hm.erase(s[i]);
                }
                i++;
            }
        }
        j++;
    }
    return ans;
}
int main()
{
    string s = "abcabdiiwabc";
    cout<<longestKSubstr(s,3);
    return 0;
}