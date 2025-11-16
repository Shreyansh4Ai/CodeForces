#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int  t;
    cin >> t ;
    while(t--){
        ll n ;
        cin >> n ;

    vector <ll>a(n);
    for(ll i = 0 ; i<n ; i++){
        cin >> a[i];
    }

    if(a[n-1] == 1 ) cout << -1 << endl;
    else {

         ll cnt = 0 ; 
           
         for (int i = n - 2  ; i>= 0 ;i--){
            while(a[i] >= a[i+1]){
                cnt++;
                a[i]/2

            }



         }

           cout << cnt << endl;
    }




    }
}