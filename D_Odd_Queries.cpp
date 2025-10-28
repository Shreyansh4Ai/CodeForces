#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        ll n , q ;
        cin >> n >> q ;

        vector<ll>a(n);
        for(ll i =0 ; i<n ;i++){
            cin >> a[i];
        }
        
    while(q--){
           ll l , r , k ;
        cin >> l >> r >> k ;
     // inputs done 
        
        ll sum =0 ;
        for(ll i = 0 ; i<n ; i++){
             if(i>= (l-1) && i<=(r-1)) a[i] = k ;
             sum += a[i];
        }
        
        if(sum % 2 == 0 ) cout << "NO"<<endl;
        else cout <<"YES"<<endl;


    }
    }
}