#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
   // ios_base :: sync_with_stdio(false);
   // cin.tie(nullptr);
  //  cout.tie(nullptr);

    ll t ;
    cin >> t ;
    while(t--){
        ll a , b, c ;
         cin >> a >> b >> c ;

         bool ans = false ;

         //case 1 
        ll new_a = 2*b-c ; 
        if(new_a % a == 0 && new_a > 0) ans = true ;
         
        //case 2 
        ll new_b = (a+c) / 2 ;
        if(new_b % b == 0 && new_b > 0 && (a+c) % 2 == 0) ans = true ;

        //case 3 
        ll new_c = 2*b-a ;
        if(new_c % c == 0 && new_c > 0) ans = true ;

           if(ans) cout <<"YES"<<endl;
           else cout << "NO"<<endl;
    }
return 0 ;
}