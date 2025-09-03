#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        string x; //n
        cin>>x;
        string s; //m
        cin>>s;
        int ans = 0;
        while(x.size()<=s.size())
        {
            x = x + x;
            ans++;
        } 
        if(x.find(s)!=string::npos) cout<<ans;
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}