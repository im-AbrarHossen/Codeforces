#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int s=0;
    while(n!=0)
    {
        if(n%10==7 || n%10==4)
        {
            s=s+1;
        }
        n=n/10;
    }
    if(s==4 || s==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
     cout<<"NO"<<endl;
    }
}
