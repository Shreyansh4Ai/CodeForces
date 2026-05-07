#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main() {
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

ll t ;
cin >> t ;
while(t--){
    ll n ;
    cin >> n ;
    vector<ll>a(n);
    map<ll , ll > mp ;
    for(ll i = 0 ; i<n ; i++){
        cin >> a[i];
        mp[a[i]]++;
    } 
   
   ll curr_high_freq = 0 ;
   
   for(auto i : mp) {
       curr_high_freq = max(curr_high_freq , i.second) ; 
       
   }
   
   ll ops = 0 ;
   
   while(curr_high_freq < n){
       
       ops++ ;
       if(curr_high_freq*2 <= n ){
           ops+=curr_high_freq ; 
           curr_high_freq*=2 ; 
       }else {
           ops+= n - curr_high_freq ; 
           curr_high_freq = n ;
           
       }
   }
    
    cout << ops << endl;
    
    
}

}
