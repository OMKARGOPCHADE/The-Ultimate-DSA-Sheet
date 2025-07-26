#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
vector<string> findRepeatedDnaSequences(string s)
{
    int i = 0, j = 0, n = s.length();
    string str = "";
    unordered_set<string> seen;
    unordered_set<string> res;
    while (j < n)
    {
        str += s[j];
        if (j - i + 1 == 10)
        {
            if (seen.find(str) != seen.end())
            {
                res.insert(str);
            }
            seen.insert(str);
            str = str.substr(1, str.length());
            i++;
        }
        j++;
    }
    return vector<string>(res.begin(), res.end());
}
int main()
{
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    vector<string>str = findRepeatedDnaSequences(s);
    for(auto i : str) cout<<i<<" ";
    return 0;
}