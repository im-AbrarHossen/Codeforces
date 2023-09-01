#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, m, i, j;
    cin>>n>> m;
    string s[n], v="vika";
    for(int i=0; i<n; i++)
    cin>>s[i];
    int k=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (s[j][i]==v[k])
            {
                k++;
                break;
            }
        }
        if(k==4)
        {
            break;
        }
    }
    if(k==4)
    {
        cout <<"YES"<<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}