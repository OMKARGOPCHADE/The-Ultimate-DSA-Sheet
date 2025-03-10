#include <bits/stdc++.h>
using namespace std;
int uniquePaths(int m, int n)
{
    int N = n + m - 2;
    int r = m - 1;
    double ans = 1;
    for(int i = 1; i<=r; i++)
    {
        ans = ans * (N - r + 1) / i; // N
        //                                c
        //                                  r
    }
    return (int) ans;
}
int main()
{
    cout<<uniquePaths(2,3);
    return 0;
}