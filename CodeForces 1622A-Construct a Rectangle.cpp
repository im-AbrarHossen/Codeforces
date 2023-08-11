#include<iostream>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long a,b,c;
        cin>>a>>b>>c;
        if(a==b+c || b==a+c || c==a+b)
        {
            cout<<"YES"<<endl;
        }
        else if((a%2==0 && b==c) || (b%2==0 && a==c) || (c%2==0 && a==b))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
