#include <iostream>
#include <string>
#include<unordered_map>
using namespace std;
    int characterReplacement(string s, int k) {
        int i = 0, j = 0, n = s.length();
        int ans = 0;
        unordered_map<char, int> hm;
        int mx_freq = 0;
        while (j < n) {
            hm[s[j]]++;
            mx_freq = max(mx_freq, hm[s[j]]);
            if ((j - i + 1) - mx_freq > k) {
                hm[s[i]]--;
                i++;
            } else
                ans = max(ans, (j - i + 1));
            j++;
        }
        return ans;
    }
int main()
{
    string s = "AABABBA";
    cout<<characterReplacement(s,3);
    return 0;
}