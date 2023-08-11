#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    string s;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(s[1]=='+'){
            x++;
        }
        else if(s[1]=='-'){
            --x;
        }
    }
    cout<<x<<endl;
}
