#include<bits/stdc++.h>
using namespace std ;

int main(){
    int x ;
    cin>> x ;

     long int  a = x/1 ;
    long int b = (x +1)/2;
    long int c = (x + 2)/3;
   long int d =(x+ 3)/4;
   long int e =(x+4)/5;

    long int result =  min({a,b,c,d,e});  // nesting should be done when parameters are more than 2 
    cout<< result << endl;
    return 0;
}