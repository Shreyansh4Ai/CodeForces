#include<bits/stdc++.h>
using namespace std ;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t ;
    cin >> t ;
    while(t--){

         ll n , x ;
         cin >> n >> x ;
         vector<ll>a(n);
         
        ll sum = 0 ;
        ll max=0;
         for(ll i = 0 ; i<n ; i++){
            cin >>a[i];

            sum+=a[i];
            
            max += ceil((double)a[i]/n); // always use double with ceil ;

         }

         cout<< sum/n <<" "<<max <<endl;

    }
}