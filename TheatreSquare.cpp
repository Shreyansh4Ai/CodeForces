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