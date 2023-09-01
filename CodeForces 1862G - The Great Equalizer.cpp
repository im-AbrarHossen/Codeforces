#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int t,n,q,d[N],x[N],y[N];
multiset<int>a,b,c;
void add(int x)
{
	if(a.find(x)!=a.end())
	{
		a.insert(x),c.insert(x);
		return;
	}
	int flag1=0,flag2=0;
	auto p=a.lower_bound(x);
	if(p!=a.begin())
	{
		p--;
		b.insert(x-*p);
		flag1=1;
	}
	auto q=a.upper_bound(x);
	if(q!=a.end())
	{
		b.insert(*q-x);
		flag2=1;
	}
	if(flag1&&flag2)
	{
		auto w=b.find(*q-*p);
		b.erase(w);
	}
	a.insert(x),c.insert(x);
}
void erase(int x)
{
	auto q=a.find(x);
	a.erase(q);
	q=c.find(x);
	c.erase(q);
	if(a.find(x)!=a.end())
	{
		return;
	}
	int flag1=0,flag2=0;
	auto p=a.lower_bound(x);
	if(p!=a.begin())
	{
		p--;
		auto w=b.find(x-*p);
		b.erase(w);
		flag1=1;
	}
	q=a.upper_bound(x);
	if(q!=a.end())
	{
		auto w=b.find(*q-x);
		b.erase(w);
		flag2=1;
	}
	if(flag1&&flag2)
	{
		b.insert(*q-*p);
	}
}
int main()
{
	cin >> t;
	while(t--)
	{
		a.clear(),b.clear(),c.clear();
		b.insert(0);
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			int x;
			scanf("%d",&x);
			add(x),d[i]=x;
		}
		cin >> q;
		for(int i=1;i<=q;i++)
		{
			scanf("%d%d",x+i,y+i);
		}
		for(int i=1;i<=q;i++)
		{
			erase(d[x[i]]);
			add(d[x[i]]=y[i]);
			printf("%d ",*(--c.end())+*(--b.end()));
		}
		putchar('\n');
	}
	return 0;
}