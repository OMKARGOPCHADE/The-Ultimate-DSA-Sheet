#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int totalFruit(vector<int> &fr)
{
    int n = fr.size();
    int i = 0, j = 0;
    int ans = 0;
    unordered_map<int, int> hm;
    while (j < n)
    {
        hm[fr[j]]++;
        if (hm.size() <= 2)
        {
            ans = max(ans, (j - i + 1));
        }
        else if (hm.size() > 2)
        {
            hm[fr[i]]--;
            if (hm[fr[i]] == 0)
            {
                hm.erase(fr[i]);
            }
            i++;
        }
        j++;
    }
    return ans;
}
int main()
{
    vector<int>fr = {1,2,1,2,3,4,1,2,3,4};
    cout<<totalFruit(fr);
    return 0;
}