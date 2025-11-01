#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin >> t ;               // adhura h 
    while(t--){


        int n ;
        cin >> n ;
          int sum = 1 ;
          int j = 1 ;
        
        for(int i = 2 ; i<=n ; i++){
            while(sum <= n){
                
                sum*= j ; 
            }
           int prevsum = sum ;
           int jam = max(sum ,prevsum);

        }



    }
}