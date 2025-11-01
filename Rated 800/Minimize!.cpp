#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int a , b ;
        cin >> a >> b ;
        
        int mid = a+b / 2 ;

        int min = (mid - a ) + (b - mid ) ;

        cout <<min << endl;
    }
}