#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<long long> v, int k, int n)
{
    vector<long long>vc(v);
    sort(vc.begin(),vc.end());
    return vc == v || k > 1? true : false;
}
vector<long long> inputData(int n)
{
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.emplace_back(t);
    }
    return v;
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        if (isPossible(inputData(n), k, n))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
        t--;
    }
    return 0;
}
