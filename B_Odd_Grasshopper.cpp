#include <bits/stdc++.h>
using namespace std;
using ll = long long  ;

int main() {	
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t ;
    cin >> t ;
    while(t--){
        ll x , n ;
        cin >> x >> n ;

        ll f_pos ;
        
        if(n%4 ==  1) f_pos = -n ;

        else if(n%4 == 2 ) f_pos = 1 ;

        else if(n%4 == 3 ) f_pos = n+1 ;

        else if(n%4 == 0 ) f_pos = 0 ;
        
        if(x%2 == 0) f_pos = x + f_pos ; 
        else f_pos = x - f_pos  ;

        cout << f_pos << endl;



    }
    
    
}
