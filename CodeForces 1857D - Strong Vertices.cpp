#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int t=0;
void test()
{
    ll n, z, i;
    cin>>n;
    ll a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    ll mi = INT_MIN;
    for(i=0;i<n;i++)
    {
        mi= max((a[i]-b[i]),mi);
    }
    vector<ll>v;
    for(i=0;i<n;i++)
    {
        if((a[i]-b[i])==mi)
        {
            v.push_back(i+1);
        }
    }
    cout<<v.size()<<endl;
    for(auto e:v)
    {
        cout<< e << ' ' ;
    }
    cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll tc =1;
	cin >> tc;
	while(tc--)
    {
	    t++;
	    test();
	}
	return 0;
}
