#include<bits\stdc++.h>
using namespace std ;
int main(){
    long long int n , k ;
    cin>> n >> k;
 
  while(k--){
   long long int lastdigit =n%10;
    if(lastdigit!=0){
        n=n-1;
    }else if(lastdigit==0){
          n=n/10;
    }
  
}
cout<<n<<endl;
}