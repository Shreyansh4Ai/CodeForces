#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s  ;
        int ycnt = 0;
        int Ncnt = 0 ;
         
       for(char c : s ){
        if(c == 'N') Ncnt++;
         else ycnt++;
       }
       if(ycnt <=1) cout <<"YES"<<endl;
       else  cout <<"NO"<<endl;
      // else cout <<"YES"<<endl;


    }
}