#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    long long a=1, b=2e9l;
    while(a<=b)
    {
        long long c=(a + b) / 2;
        long long d=(c*(c - 1)) / 2;
        if (d > n)
        {
            b = c - 1;
        }
        else
        {
            a = c + 1;
        }
    }
    long long d = (b * (b - 1)) / 2;
    long long result = n - d;
    cout <<(long long)(b+result)<<endl;
}
     
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}