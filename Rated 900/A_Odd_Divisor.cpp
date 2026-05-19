#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t ;
    cin >> t ;
    while(t--){

     ll n;
     cin >> n ;

     while(n%2 == 0){
        n/=2;
     }

     if(n>1) cout <<"YES"<<endl;
     else cout <<"NO"<<endl;

    }
return 0 ; 
}
