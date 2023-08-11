#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,a,b;
        long long result;
        cin>>x>>y>>a>>b;
        if((y-x)%(a+b)==0){
          result=(y-x)/(a+b);
        }
        else{
            result=-1;
        }
        cout<<result<<endl;
    }
}
