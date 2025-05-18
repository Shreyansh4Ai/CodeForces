#include<bits/stdc++.h>
using namespace std;
int main(){
     long long int n ;
    cin>> n ;
    long long int  count =0 ;
    long long int b = n/2 ;
     
    if(n%2!=0){
        cout<<0<<endl;

    }else {
for(long long int l=1;l<(b-l);l++){
    count++;
}
cout<<count << endl;
    }

    return 0 ;
}