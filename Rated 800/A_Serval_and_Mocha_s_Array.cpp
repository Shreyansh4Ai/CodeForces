#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int t ;
    cin >> t ;
    while (t--){
      ll n ;
      cin >> n ;
      vector <ll> a(n);
      for (int i = 0 ; i< n ;++i){
        cin >> a[i];
      }  

      // inputs done 
       bool flag = false ;
      for (int i = 0 ; i<n ; i++){
        for (int j = i +1 ; j< n ; j++){
                if (__gcd(a[i],a[j]) <= 2 ){
                    flag = true ;
                }
        }
      }
    if(flag == false ) cout << "NO"<< endl;
    else cout << "YES "<< endl;

    }
}