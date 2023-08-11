#include<iostream>
#include <cmath>
using namespace std;
int main(){

int q;
cin>>q;
while(q--){
    int n;
    cin>>n;
    int num[n];
    long long sum=0;

    for(int i=1;i<=n;i++){
        cin>>num[i];
    }
    for(int i=1;i<=n;i++){
        sum+=num[i];

    }

    sum = ceil((double)sum/n);

cout<< sum<<endl;

    }
}
