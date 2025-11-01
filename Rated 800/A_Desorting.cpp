#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        ll  n ;
     cin >> n ;
  vector <ll> a(n);
  for(int i = 0 ; i<n-1 ;i++){
    cin >> a[i];
}

if(is_sorted(a.begin(),a.end())){
    cout<<0<<endl;
    
}else{
 ll  minimum = 0 ;
 for(ll i = 0 ; i< n-1 ;i++){
    ll min = a[i] - a[i+1];
    if(minimum > min){
        minimum = min ;
    }

 }
    cout <<(minimum / 2) + 1 << endl;






}



    }
}