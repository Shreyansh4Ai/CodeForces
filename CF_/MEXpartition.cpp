#include<bits/stdc++.h>
using namespace std;

int main(){
    int  t;
    cin >> t ;
    while(t--){
        int n;
        cin>> n ;
        vector<int> a(n);
        vector<bool> pres(105 , false );

        for(int i = 0 ; i < n ; i++){
          cin >> a[i];
          if(a[i] <= 105 ){
            pres[a[i]] = true ;
          }
        }

        int MEX = 0 ;
        while(pres[MEX]){
         MEX++;
         
        }
    cout << MEX <<"\n";
    }

}