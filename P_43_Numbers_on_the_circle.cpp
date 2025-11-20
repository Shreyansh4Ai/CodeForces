#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

ll ans(ll n ){
  if(n == 0 || n == 1 ) return 1;
  else return n*ans(n-1);

 }
int main(){
    ll n ; 
    cin >> n ;
    
    ll l = ans(n);
    cout << l << endl;

}