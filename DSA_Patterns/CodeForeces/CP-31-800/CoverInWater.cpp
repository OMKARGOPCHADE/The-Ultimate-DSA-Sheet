#include<iostream>
#include<vector>
using namespace std;
int noOfActions(string s,int len)
{
    int ans = 0;
    for(int i = 0; i<len; i++)
    {
        if(s[i]=='#')continue;
        int cnt = 0;
        while(i<len && s[i++]=='.') cnt++;
        if(cnt>2) 
        {
            ans = 2;
            break;
        }
        else ans += cnt;
        i--;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<noOfActions(s,n)<<endl;
    }
    return 0;
}
