#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool counter(vector<int> &hm)
{
    for (auto i : hm)
        if (i != 0)
            return false;
    return true;
}
bool checkInclusion(string s1, string s2)
{
    vector<int> hm(26, 0);
    int k = s1.length();
    for (int i = 0; i < k; i++)
        hm[s1[i] - 'a']++;
    int i = 0, j = 0, len = s2.length();
    while (j < len)
    {
        hm[s2[j] - 'a']--;
        if (j - i + 1 == k)
        {
            if (counter(hm))
                return true;
            hm[s2[i] - 'a']++;
            i++;
        }
        j++;
    }
    return false;
}
int main()
{
    cout<<checkInclusion("ab","helloabaa");
    return 0;
}
