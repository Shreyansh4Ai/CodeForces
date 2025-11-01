#include<bits/stdc++.h>
using namespace std ;
int main(){
   long long int n , m , a ;
    cin>> n >> m >> a ;
    if(n==m && m==a){
        cout << 1 << endl;
    }else {
     long long int length = ((n+a-1)/a);
     long long int breadth = (m+a-1)/a;
     long long int total = length*1ll*breadth;//size matters brother !!!
     cout << total<< endl ;
    }
     return 0;
}
//learning --->>>>> how to get the qoutient +1 in division and dealing with size/area when your doing things on the basis of perimeter 
// total = length + breadths checks for perimeter wrongly if asked area then alwAYS do multiply ...
// to get the desired output i can also use celi but it works perfectly on double type so its not useful here 
