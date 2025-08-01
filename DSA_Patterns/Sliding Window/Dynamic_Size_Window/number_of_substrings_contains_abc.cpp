#include <iostream>
#include <string>
using namespace std;
int numberOfSubstrings(string s)
{
    int j = 0, n = s.length();
    int ans = 0;
    int arr[3] = {-1, -1, -1};
    while (j < n)
    {
        arr[s[j] - 'a'] = j;
        if (arr[0] != -1 && arr[1] != -1 && arr[2] != -1)
        {
            ans += 1 + min(arr[0], min(arr[1], arr[2]));
        }
        j++;
    }
    return ans;
}
int main()
{
    string s = "abcabc";
    cout<<numberOfSubstrings(s);
    return 0;
}