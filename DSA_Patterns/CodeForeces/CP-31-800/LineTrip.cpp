#include<iostream>
#include<vector>
using namespace std;
vector<int> inputData(int n)
{
    vector<int>v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    return v;
}
// Gas Stations
int minGas(vector<int>v, int n, int x)
{
    int ans = 2 * (x - v[n-1]);
    ans = max(ans,max(0,v[0]));
    for(int i = 0; i<n-1; i++)
    {
        ans = max(ans,v[i+1]- v[i]);
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        cout<<minGas(inputData(n),n,x);
        cout<<endl;
    }
    return 0;
}