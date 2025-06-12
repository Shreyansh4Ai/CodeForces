#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n ;
    cin>> n ;
    
    vector<int> a(n);
    for(int i  =0 ; i<n ; i++){
        cin>>a[i];
    }
    
    int sum = 0 ;
    int odd = 0 ; 
    int even = 0 ;
     for(int i  =0 ; i<n ; i++){
        sum = sum +a[i];
        if(a[i]%2==0){
            even ++ ;
        }else {
            odd++;
        }
    }
    if(sum%2 != 0){
        cout<<"YES"<<endl;
    } else if(odd>1 && odd<n){
        cout<<"YES"<<endl;
    }else {
        cout <<"NO"<<endl;
    }
}
int main() {
	// your code goes here
int t ;
cin>>t ;
while(t--){
    solve();
}
return 0 ;
}
