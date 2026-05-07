#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main() {
int t ;
cin >> t ;
while(t--){
    ll n ;
    cin >> n ;
    vector<ll>a(n);
    for(ll i = 0 ; i<n ; i++){
        cin >> a[i];
    }
    
    
    for(ll i = n-2 ; i>=0 ; i--){
        if(a[i+1]>0) {
            a[i] = a[i]+a[i+1] ;
            
        }
    }
    
    ll ans = 0 ; 
    for(ll x : a){
        if(x >0) ans++;
    }
    
    cout << ans << endl;
    
}

}
