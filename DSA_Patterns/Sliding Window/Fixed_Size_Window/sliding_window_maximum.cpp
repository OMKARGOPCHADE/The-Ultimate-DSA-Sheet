#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& A, int B) {
        int n = A.size();
        int i = 0, j = 0;
        vector<int> ans;
        deque<int>dq;
        int max_val = 0;
        while (j < n) {
             if(!dq.empty())
             {
                while(!dq.empty() && dq.back() < A[j])
                {
                    dq.pop_back();
                }
             }
             dq.push_back(A[j]);
            if (j - i + 1 == B) {
               
                ans.emplace_back(dq.front());
                if(dq.front()==A[i])dq.pop_front();
                i++;
            }
            j++;
        }
        return ans;
}
int main()
{
    vector<int> ans = {12, -1, -7, 8, -15, 30, 16, 28};
    ans = maxSlidingWindow(ans,3);
    for(auto i:ans) cout<<i<<" ";
    return 0;
}