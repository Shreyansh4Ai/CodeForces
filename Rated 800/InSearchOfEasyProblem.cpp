#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 long int n;
 cin>> n ;
 int a[n];
 for(long int i =0 ;i< n ;i++){
     cin>>a[i];
 }
  int count =0 ;
 for (long int i =0 ;i<n ; i++){
     if(a[i]== 1){
         count++;
         break;
     }
     
 }
 if(count>0){
     cout<<"HARD"<<endl;
 }else{
     cout<<"EASY"<<endl;
 }
}
