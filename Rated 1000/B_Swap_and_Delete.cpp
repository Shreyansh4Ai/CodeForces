#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
    
    ll t ;
    cin >> t ;
while(t--){
    string s ;
    cin >> s ;
    ll n = s.size();
    ll cnt0 = 0 ;
    ll cnt1 = 0 ;
   
    for(ll i = 0 ; i<s.size() ; i++){
        if(s[i] == '0') cnt0++;
        else cnt1++;
    }
    ll lent = 0 ;
     for(ll i = 0 ; i<n ; i++){
        if(s[i] == '0' && cnt1>0){
            cnt1--;
             lent++;
        }
        else if(s[i]== '1' && cnt0>0){
            cnt0--;
            lent++;
        }
        else {
            break ; 
        }
     }

     cout << n - lent <<endl;

}
}