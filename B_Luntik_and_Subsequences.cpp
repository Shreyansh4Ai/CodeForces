#include<bits\stdc++.h>
using namespace std ; 
using ll = long long ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

  int t ;
  cin >> t ;
  while(t--){
    ll n ;
    cin >> n ;
    vector<ll>a(n);
    for(ll i = 0 ; i<n ; i++){
        cin >> a[i];
        
    }

    ll cnt_zero = 0 ;
    ll cnt_one = 0 ;

    for(ll i = 0 ; i<n ; i++){
        if(a[i] == 0) cnt_zero++ ;
        else if(a[i] == 1) cnt_one++ ; 
    }

   int ans = pow(2,cnt_zero) * cnt_one ; 
   cout <<ans<<endl;



  }


}