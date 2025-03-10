#include <bits/stdc++.h>
using namespace std;
double pow(double x, int n)
{
    double ans = 1.0;
    long long t = n;
    if(n<0) t = t * -1;
    while(t > 0)
    {
        if(t%2==1)//binary exponantion
        {
            ans*=x;
            t--;
        }
        else 
        {
            x*=x;
            t/=2;
        }
    }
    if(n<0) ans = 1/ans;
    return ans;
}
int main()
{
    cout<<to_string(pow(2.0000,10));
    return 0;
}