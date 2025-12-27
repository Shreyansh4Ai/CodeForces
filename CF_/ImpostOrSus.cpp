#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;   // ni pta sahi h ya glt 

int main(){
    int t ;
    cin >> t ;
    while(t--){
        string r ;
        cin >> r ;
        ll n = r.size();
        ll chn = 0 ;
        if(r[0] == 'u') {
            chn++;
            r[0]='s';
        }
        if(r[n-1] == 'u') {
            chn++;
            r[n-1] = 's';
        }
         ll nU= 0;
        for(ll i = 1 ; i<n ;i++){
            if(r[i] == 'u' ) nU++;
            else{
                chn += nU/2;
                nU=0;
            }
        }
        
        cout << chn << endl;

    }
}