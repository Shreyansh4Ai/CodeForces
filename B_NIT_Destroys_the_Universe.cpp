#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n  ;
        vector <int> a(n);
        for(long  long i = 0 ; i<n ; i++){
            cin >> a[i];
        }
        
        int cnt0 = 0;
        
        for(long long  i = 0 ; i<n ; i++){
          if( a[i] == 0 ) cnt0++;  

        }

        bool zero = false ;
        int l  = 0 ; 
        int r = n-1 ;


        while(a[l] == 0 ) l++ ;
        
        while(a[r] == 0 ) r-- ;

        for(int i = l ; i<=r ;i++){
            if(a[i] == 0){
                zero = true;
            }
        }

        if(cnt0 == n) cout <<0<<endl;

        else if(zero == false ) cout << 1 << endl;

        else cout << 2 << endl;

    }
}