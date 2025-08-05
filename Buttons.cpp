#include<bits/stdc++.h>
using namespace std ;

int main (){
    int t ;
    cin >> t ;
    while(t--){
       long long  int a , b ,c ;
        cin >> a >> b >> c ;

        long long anna = a ;
        long long katie = b ;
         
        if(c%2 != 0 ){
            anna += (c/2)+1; 
            katie += c/2; 
        }else {
            katie += c/2; 
            anna += c/2; 
        }

        if(anna > katie ) cout << "First"<<endl;
        else cout <<"Second"<<endl;



    }
    return 0 ;
}
