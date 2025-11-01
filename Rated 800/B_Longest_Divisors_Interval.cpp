#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
 int t ;
 cin >> t ;
 while(t--){
    
    ll a = 1 ;

    for(ll i = 2 ; i<=50 ; i++){
        a = lcm(a,i);
    }


    ll n ; 
    cin >> n ;

    ll i = 1 ; 
    while(n%i == 0){
        ++i;
    }
    cout << i-1 << endl;

  
 }
}