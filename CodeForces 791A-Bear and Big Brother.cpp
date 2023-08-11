#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    int s=0;
    cin>>a>>b;
    if(a>b)
    {
        s=0;
    }
    else
    {
        while(a<=b)
        {
            a=a*3;
            b=b*2;
            s++;
        }
    }
    cout<<s<<endl;
    return 0;
}
