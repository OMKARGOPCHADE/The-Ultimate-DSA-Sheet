#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    long long n = a.size(); // size of the array

    // Find Sn and S2n:
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    // Calculate S and S2:
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }
    cout<<S<<" "<<SN;
    cout<<endl<<S2<<" "<<S2N<<endl;
    //S-Sn = X-Y:
    long long val1 = S - SN;
    cout<<val1<<endl;
    // S2-S2n = X^2-Y^2:
    long long val2 = S2 - S2N;
    cout<<val2<<endl;
    //Find X+Y = (X^2-Y^2)/(X-Y):
    val2 = val2 / val1;
     cout<<val2<<endl;
    //Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
    // Here, X-Y = val1 and X+Y = val2:
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}

int main()
{
    vector<int> a = {1,2,2};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}