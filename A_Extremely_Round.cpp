#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int t ;
    cin >> t ;
    while(t--){
       ll n ; 
       cin >> n ;
    
       if (n < 10 ){
        cout << n << endl;
        
       }
       else {
        int cnt = 0;
        while(n > 10){
            cnt +=9 ;
            n = n / 10 ; 

        }

        cout << cnt+n << endl;
       }

    }
}