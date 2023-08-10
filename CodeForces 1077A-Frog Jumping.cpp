#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        if(k%2==0)
        {
            k=k/2;
            a=a*k;
            b=b*k;
            cout<<a-b<<endl;
        }
        else
        {
            k=k/2;
            a=a*(k+1);
            b=b*k;
            cout<<a-b<<endl;
        }
    }
}
