#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;

        bool haspair = false ;
        for(int i = 0 ; i< (s.size() - 1) ; i++)
        {
            if(s[i] == s[i+1]){
                haspair = true ;
                break ;
            }


        }

        if(haspair == true ) cout << 1 << endl;
        else cout << s.size() << endl;

    }
}