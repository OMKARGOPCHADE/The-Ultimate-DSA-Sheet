#include <bits/stdc++.h>
using namespace std;
int searchIn2DMat(vector<vector<int>>&mat,int t)
{
    int m = mat.size(), n = mat[0].size();
    int low = 0, high = m * n - 1;
    while(low<=high)
    {
        int mid = (low + high) / 2;
        int row = mid / n, col = mid % n;
        if(mat[row][col]==t)return true;
        else if(mat[row][col] > t) high = mid -1;
        else low = mid + 1;
    }
    return false;
}
int main()
{
    vector<vector<int>> mat = {{1,2,3},{4,5,6}};
    cout<<searchIn2DMat(mat,5);
    return 0;
}