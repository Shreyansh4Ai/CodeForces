#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
    ll n ;
    cin >> n ;
    vector<ll> a(n);
    for(ll i = 0 ; i<n ; i++){
        cin >> a[i];
    }
    
    ll q;
    cin >> q ;
    
    while(q--){
        ll x ;
        cin >> x ;
        ll j = lower_bound(a.begin(),a.end(),x ) - a.begin() ;
        if(j < n && a[j] == x) cout << j <<endl;
        else cout <<-1<<endl;
    }

    

}