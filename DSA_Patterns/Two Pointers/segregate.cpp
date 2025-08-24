#include <iostream>
#include<vector>
using namespace std;
void segregate0and1(vector<int> &arr)
{
    // code here
    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] == 1)
        {
            swap(arr[i], arr[j]);
        }
        else if (arr[j] == 0)
            swap(arr[j], arr[i]);
        if (arr[i] == 0)
            i++;
        if (arr[j] == 1)
            j--;
    }
}
int main()
{
    vector<int>v = {0,1,0,1,0,1,1,0};
    segregate0and1(v);
    for(auto i: v) cout<<i<<" ";
    return 0;
}