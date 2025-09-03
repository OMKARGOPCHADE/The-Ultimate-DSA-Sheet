#include<iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        unordered_map<int,int>hm;
        for(int i = 0; i<n; i++){
            
            cin>>arr[i];
            hm[arr[i]]++;
        }
        if(hm.size()>2) cout<<"No";
        else if(hm.size()==1)cout<<"Yes";
        else if(hm.size()==2)
        {
            int l1 = 0, l2 = 0;
            for(auto i:hm) 
            {
                if(l1==0) l1 = i.second;
                else l2 = i.second;
            }
            if(l1==l2) cout<<"Yes";
            else if(abs(l1-l2)==1)cout<<"Yes";
            else cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}