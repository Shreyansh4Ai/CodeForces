#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
    int t ;
    cin >> t;
    while(t--){
        ll n;
        cin >> n ;
        vector<ll> a(n);
        for(ll i = 0 ; i<n ; i++){
            cin >>a[i];

        }
        

        ll ans =  a[n-1] - a[0];  // first n last 
        
        for(ll i = 1 ; i<n ; i++){       // first n any 
            ans = max(ans , a[i] - a[0]);
        }
 
        for(int i = 0 ; i< n-1 ; i++){       // last n any 
            ans = max(ans,a[n-1] - a[i]);
        }

        for(ll i = 0 ; i<(n-1)  ; i++){  // consecutive 
            ans = max(ans, a[i] - a[i+1]);
        }

     cout << ans << endl;
     
    }
return 0 ;

}