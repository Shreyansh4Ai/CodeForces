#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
    int t ;
    cin>> t ;
    while(t--){
        ll n , k;
        cin >> n >> k ;

        vector<ll>a(n);
        for(ll i = 0 ; i<n ; i++){
            cin >> a[i];
        }
       // input 


        if(n==1) cout << 0 << endl;
        else {
        ll cnt =0 ;
        ll maxv= 0;
        sort(a.begin() , a.end());
        for(ll i = 0 ; i<n-1  ; i++){
         ll j = i+1;
   
            if(abs(a[i]-a[j]) <= k){
           cnt++;
         if(cnt >= maxv)
           maxv = cnt;

            }else{
                   cnt = 0;
            }
         }
         
        

         cout << a.size() - (maxv+1) << endl;
        }
        }

    }
