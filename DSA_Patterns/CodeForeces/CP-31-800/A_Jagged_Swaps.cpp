#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t > 0)
    {
        int n;
        cin>>n;
       long long arr[n];
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]==1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
        t--;
    }
    return 0;
}