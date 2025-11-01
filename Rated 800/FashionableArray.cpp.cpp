#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin>> n ;
    vector<int> a(n) ;
    for(int i =0 ; i<n ; i++){
        cin>> a[i];
    }
    
    sort(a.begin() ,a.end());  // when no need to do because already its                             divisible by 2  that is min + max % 2 == 0 
    if(a[0]%2 == a[n-1]%2){
    cout << 0 <<endl;
    return ;
    }
    int left = n , right = n ;
    
    for(int i = 1 ; i <n ;++i){
        
        if(a[i]%2 != a[0]%2 ){
            
            left = i ;
            break ;
        }
    }
    
    
    for(int i = 1 ; i <n ;++i){
        if(a[n-i-1]%2 != a[n-1]%2 ){
            right = i ;
            break;
        }
    }
    
    cout<< min(left , right )<<endl;
}

int main() {
int t ;
cin>> t ; 
while(t--){
    solve();
}
}
