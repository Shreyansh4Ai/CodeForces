#include<bits/stdc++.h>
using namespace std ;
int main(){
  int t ;
  cin>> t ;
  while(t--){
    int n ,k ;
    cin>> n >> k ;
    char s[n];
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
  int count =0;
    for(int i=1;i<=n/2;i++){
        if(s[i]=s[n-i+1]){
            count++;
        }
    }

if(count==k){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
  }



    return 0;
}