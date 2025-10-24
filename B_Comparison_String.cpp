#include<bits/stdc++.h>
using namespace std ;

int main(){

    int  t ;
    cin>> t ;
    while(t--){
        int n ;
        cin >> n; 
        string s ;
        cin >> s;
      int grt = 0 ;
      int lsr = 0 ;
        for(int i = 0 ; i<n ; i++){

          if(s[i] == '>'){
            grt++;
            lsr = 0 ;
          }else{
            lsr++;
            grt=0;
          }

        }

         int ans = max(grt , lsr );
         cout << ans+1 << endl;

    }


}          