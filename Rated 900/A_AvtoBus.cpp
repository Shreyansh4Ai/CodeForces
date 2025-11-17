#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        ll n;
        cin >> n ;  // wrong solution hai 
        
        if( n<4 || n%2== 1){
            cout <<-1<<endl;
        }
        else {
           ll minBus = ceil(n*1.0 / 6 ) ;
           ll maxBus = n/4 ;
           
        cout <<minBus<<" "<<maxBus << endl;
      
        }

    }
    return 0 ;
}