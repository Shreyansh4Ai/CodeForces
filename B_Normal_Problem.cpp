#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ; 
    cin >> t ;
    while(t--){
        string a ;
        cin >> a ;

        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] == 'p') a[i] = 'q';
           else if(a[i] == 'q') a[i] = 'p';
        }

        for(int i = (a.size() - 1) ; i >=0; i-- ){
            cout <<a[i];
        }cout << endl;
    }
}