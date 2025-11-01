#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int t ;
    cin >> t ;
    while(t--){

    ll n ;
    cin >> n ;

    vector<ll> a(n-1);
    for(ll i = 0 ; i< n-1 ; i++){
        cin >> a[i];
    }


   ll sum  =0 ;
    for(ll i = 0 ; i< n-1 ; i++){
        sum += a[i];
    }

    cout << sum*(-1)<<endl;

    }
}