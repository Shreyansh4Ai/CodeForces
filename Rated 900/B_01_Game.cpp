#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t ;
    cin >> t;
    while(t--){
        string s ;
        cin >> s ;
         int cnt1 = 0 ;
         int cnt0 = 0 ;
        for(int i = 0 ; i<s.length() ; i++){
              if(s[i] == '1')  cnt1++;
              else cnt0++;

        }
        int x = min(cnt0 , cnt1);
        if(x%2 == 0) cout << "NET"<<endl;
        else cout<<"DA"<<endl;

    }


}