#include<bits/stdc++.h>
using namespace std;
long long n,m,k,ans,sum;
long long a[200001];
priority_queue<long long,vector<long long>,greater<long long> >pq;
void solve()
{
    cin>>n>>m>>k;
	while(!pq.empty())
	{
		pq.pop();
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	ans=0;
	sum=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]<=0)
		{
			continue;
		}
		if(pq.size()==m)
		{
			if(a[i]>pq.top())
			{
				sum-=pq.top();
				sum+=a[i];
				pq.pop();
				pq.push(a[i]);
			}
			ans=max(ans,sum-k*i);
		}
		else
		{
			if(pq.size()<m)
			{
				sum+=a[i];
				pq.push(a[i]);
				ans=max(ans,sum-k*i);
			}
		}
	}
	cout<<ans<<endl;
	return;
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