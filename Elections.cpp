#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y,z;
        cin>>a>>b>>c;
        x=max(b,c)-a+1;
        y=max(a,c)-b+1;
        z=max(a,b)-c+1;
        cout<<max(0,x)<<" "<< max(0,y)<<" "<< max(0,z)<<endl;
    }
}
