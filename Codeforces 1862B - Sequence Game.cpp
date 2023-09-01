#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n,i; 
    cin >> n;
    long long b[n];
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<long long> a;
    a.push_back(b[0]);
    for(i = 1; i < n; i++)
    {
        if(b[i - 1] <= b[i])
        {
            a.push_back(b[i]);
        }
        else
        {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout << a.size()<< endl;
    for (long long x: a)
    {
        cout << x <<' ';
    }
    cout << endl;
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