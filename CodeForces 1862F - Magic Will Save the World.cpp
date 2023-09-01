#include <bits/stdc++.h>
using namespace std;
const int N = 5e6+10;
long long n, m;
long long w[N], a[N];
long long f1, f2, s, i, j;
bool check(int x)
{
    long long ff1 = f1 * x, ff2 = f2 * x;
    if(s - w[min(ff1, s)] <= ff2)
    {
    return true;
    }
    return false;
}
void solve()
{
    cin >> f1 >> f2;
	cin >> n;
    s = 0;
    for(i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    for(i = 0; i <= s; i++)
    {
        w[i] = 0;
    }
    for(i = 1; i <= n; i++)
    {
        for(j = s; j >= a[i]; j--)
        {
            w[j] = max(w[j], w[j - a[i]] + a[i]);
        }
    }
    long long l = 0, r = 1e7, ans;
    while(l <= r)
    {
        long long mid = (l + r) >> 1;
        if (check(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
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