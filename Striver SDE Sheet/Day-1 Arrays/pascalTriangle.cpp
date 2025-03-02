#include<bits/stdc++.h>
using namespace std;
void genarte(int num)
{
    vector<vector<int>>ans(num);
    for(int i = 0; i<num; i++)
    {
        vector<int>v(i+1);
        for(int j = 0; j<i; j++)
        {
            if(j==0)
                v[j] = 1;
            else if(i>1)
                v[j] = ans[i-1][j-1] + ans[i-1][j];
        }
        v[i] = 1;
        ans[i] = v;
    }
    for(auto i : ans)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    genarte(10);
    return 0;
}