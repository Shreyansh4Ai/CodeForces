#include<bits/stdc++.h>
using namespace std ;

int main(){
    long int n;
    cin>> n ;
    string s ;
    cin>> s ;
   long int a = 0;
   long int d  = 0;
    for(int i =0 ;i<n ;i++){
        if(s[i]=='A'){
            a++;
        }else if(s[i]=='D'){
            d++;
        }
    }
    if(a>d) cout<<"Anton" <<endl;
    else if(d>a) cout<<"Danik"<<endl;
    if(a==d) cout <<"Friendship" <<endl;


    return 0;
}