#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    int i;
    int R=0,G=0,B=0;
    for( i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    if(n<=50)
    {
        for(i=1;i<=n;i++)
        {
            if(s[i]=='R'|| s[i]=='G'||s[i]=='B')
            {
                if(s[i]=='R')
                {
                    if(s[i]=='R'&& s[i+1]=='R')
                    {
                        R++;
                    }

                }
                else if(s[i]=='B')
                {
                    if(s[i]=='B'&& s[i+1]=='B')
                    {
                        B++;
                    }
                }
                else if(s[i]=='G')
                {
                    if(s[i]=='G'&& s[i+1]=='G')
                    {
                        G++;
                    }

                }

            }

        }
        cout<<R+G+B<<endl;
    }
}
