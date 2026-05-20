#include<bits/stdc++.h>
using namespace std ;

using ll = long long ;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

    ll t ;
    cin >> t ;
    while(t--){
        ll n , k ;
        cin >> n >> k;
      
         vector<ll>a(n*k);
         for(ll i =0 ; i < n*k ; i++){
            cin >> a[i];
         }
        
         ll ptr = n*k ; 

         ll sum = 0 ;

         while(k--){
            ptr -=(n/2 + 1) ;
            sum+=a[ptr];
         }

        cout << sum << endl;
    }
}