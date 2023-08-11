#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
       ll ans = n/2;
       if (n%2==0){
           cout<<ans-1<<endl;
       }
       else{
        cout<<ans<<"\n";
       }
    }
   return 0;
}
