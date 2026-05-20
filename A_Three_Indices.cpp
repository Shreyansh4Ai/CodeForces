#include<bits/stdc++.h>
using namespace std ;

using ll = long long ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t ;
    cin >> t ;
    while(t--){
         ll n ;
         cin >> n ;
         vector<ll>a(n);
         for(ll i = 0 ; i<n ; i++){
            cin >>a[i];
         }

         int flag = 0 ;

         for(int i = 1 ; i<n-1 ; i++){
             
            if(a[i-1] <a[i] && a[i]>a[i+1]){
                cout <<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                flag = 1 ;
                break;
        
            }


         }
        if(flag == 0) cout <<"NO"<<endl;


    }


}