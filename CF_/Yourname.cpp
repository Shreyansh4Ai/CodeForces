#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >>  t;
    while(t--){
        int n ;
        cin >> n ;
        
        string s ;
        cin >> s ;
        string q ;
        cin >> q ;

        sort(s.begin() , s.end());
        sort(q.begin() , q.end());
        bool ans =false ;
        for(int i =0 ; i<n ; i++){
            if(s[i] != q[i]){
                ans = true ;
                break;
            }
        }
        
        if(ans == true ) cout <<"NO"<<endl;
        else cout <<"YES"<<endl;

    }
}