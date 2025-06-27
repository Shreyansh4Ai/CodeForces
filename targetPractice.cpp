#include <bits/stdc++.h>
using namespace std;

int main() {
 int t ;                     // logical error fix it 
 cin>> t ;
 while(t--){
   
   
  char a[10][10] ;
   
   for(int i = 0 ; i< 10 ; i++){
       for(int j=0 ;j<10 ;j++){
           cin>>a[i][j];
       }
   }
       int pts = 0;
    for(int i = 0 ; i< 10 ; i++){
       for(int j=0 ;j<10 ;j++){
          
          if(a[i][j] == 'X'){
              if( i ==0 || i == 9 ) pts = pts + 1 ;
              if(i == 1 || i == 8 ) pts =pts + 2 ;
              if(i == 2 || i==7  ) pts+=3 ;
              if(i== 3 || i == 6) pts+=4 ;
              if(i== 4  || i == 5 ) pts+=5 ;
              
          }
          
          
       }
    }
       
   cout<< pts << endl;
     
 }

}

