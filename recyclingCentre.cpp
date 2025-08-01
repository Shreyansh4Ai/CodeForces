#include <bits/stdc++.h>
using namespace std;

using ll = long long ;
int main() {

int t ;
cin >> t ;
while(t--){
  ll  n , c ;
  cin >> n >>  c ;
  
  vector<ll> a(n);
  for(int i = 0 ; i< n ; i++){
      cin >> a[i];
  }
  
  sort(a.rbegin() , a.rend());
  
  int coins= 0 ;
  ll dbbl = 1 ;
  
  for(auto &x : a ){
      x *= dbbl ; 
      if(x <=  c){
          dbbl *= 2 ;
          
      }else {
          coins++;
      }
      
      
      
  }
  
  cout << coins << endl;
  
  
  
}
return 0 ;
}
