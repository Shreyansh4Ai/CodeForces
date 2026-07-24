#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main() {
    
ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

int t ;
cin >> t ;
  while(t--){
  ll n , k ;
  cin >> n >> k ;
  
  vector<ll>a(n);
  for(ll i = 0 ; i<n ;i++){
      cin>>a[i];
  }
  
   ll ans = INT_MAX ;
   ll even_cnt = 0;
   
   for(int i = 0 ; i<n ; i++){
       if(a[i]%2 == 0){
           even_cnt++;
       }
      if(a[i]%k==0) ans = 0 ;
      ans = min(ans , (k - a[i]%k)) ;
      
   }
   
   // case for k ==4 
   if(k==4){
   if(even_cnt>=2) ans = min(ans , 0LL);
   else if(even_cnt == 1) ans = min(ans , 1LL);
   else if(even_cnt == 0) ans = min(ans , 2LL);
   }
   
   cout << ans << endl;
  
  
}

}
