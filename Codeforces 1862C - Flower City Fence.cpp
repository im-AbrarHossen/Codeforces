#include <bits/stdc++.h>
using namespace std;   
void print(int n)
{
    cout<<(n?"YES\n":"NO\n");
}
void solve()
{
    int n,i;
    cin >> n;
    long long a[n+7];
    long long b[n+7] = {0};
    bool f = false;
    for(i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(a[i] > n) 
        {
            f = true;
        }
    }
    if(f)
    {
        print(0);
        return;
    }
    for(i = 1; i <= n; i++)
    {
        b[1]++;
        b[a[i]+1]--;
    }
    for(i = 1; i <= n; i++)
    {
        b[i] = b[i] + b[i-1];
    }
    for(i = 1; i <= n; i++)
    {
        if(a[i] != b[i])
        {
            print(0);
            return;
        }
    }
    print(1);
}
int main()
{
    long long t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}