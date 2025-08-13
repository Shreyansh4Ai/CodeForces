#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin >> n ;

    string s ;
    cin >> s ;

  int ncnt = 0 , zcnt = 0 ;
    for(char c : s ){
          if(c == 'n') ncnt++ ; 
          if(c == 'z') zcnt++ ;

    }

    for(int i = 0; i<ncnt ; i++) cout <<1 <<" " ; 
    for(int i = 0 ; i< zcnt ; i++) cout <<0 <<" ";

}