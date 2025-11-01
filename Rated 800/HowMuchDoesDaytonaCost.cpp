#include <bits/stdc++.h>
using namespace std;

int main() {
 int t ;
 cin>> t ;
 while(t--){
     
     int n , k ;
     cin>> n >> k ;
     
     vector <int> a(n);
     for(int i = 0 ; i<n ;i++){
         cin>>a[i];
     }
     
     bool ans = false ;
     for(int i = 0 ;i<n ;i++){
         if(a[i] == k){
             cout <<"YES"<<endl;
             ans = true ;
             break ;
         }
     }
     if(ans == false){
         cout <<"NO"<<endl;
     }
     
 }

}
