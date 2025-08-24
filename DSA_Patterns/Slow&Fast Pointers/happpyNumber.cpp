#include <iostream>
using namespace std;
int getNext(int n)
{
    long long sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += (digit * digit);
        n /= 10;
    }
    return sum;
}
bool isHappy(int n)
{
    if (n == 1 || n == 7)
        return true;
    int slow = n;
    int fast = getNext(n);
    while (fast != 1 && slow != fast)
    {
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    }
    return fast == 1;
}
int main()
{
    cout << isHappy(7);
    return 0;
}