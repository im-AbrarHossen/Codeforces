#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;

        int even=0,odd=0;
        int x;
        for(int i=1;i<=2*n;i++){

            cin>>x;
            if(x%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(odd==even){
            cout<< "Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
 }
