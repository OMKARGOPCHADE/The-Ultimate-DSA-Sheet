#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int sz = intervals.size();
        if (sz == 1)
            return intervals;
        vector<int> v = {INT_MAX, INT_MIN};
        intervals.emplace_back(v);
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for (int i = 0; i < sz; i++)
        {
            bool flag = false;
            int a = INT_MAX, b = 0;
            b = intervals[i][1];
            while (i < sz && b >= intervals[i + 1][0])
            {
                a = min(a, intervals[i][0]);
                b = max(b, intervals[i + 1][1]);
                i++;
                flag = true;
            }
            if (!flag)
            {
                ans.emplace_back(intervals[i]);
            }
            else
            {
                vector<int> v = {a, b};
                ans.emplace_back(v);
            }
        }

        return ans;
    }
};
int main()
{
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    Solution s;
    intervals = s.merge(intervals);
    for(auto i: intervals) cout<<i[0]<<" "<<i[1]<<"|";
    return 0;
}