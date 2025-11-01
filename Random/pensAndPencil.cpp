#include <bits/stdc++.h>
using namespace std;

int main() {
int t ;
cin >> t ;
while(t--){
    int a , b ,c ,d , k ;
    cin >> a >> b >> c >> d >> k ;
    
    int l = ((a + c - 1 )/ c) ; 
    int p = ((b+d - 1) / d) ;
    
    if(l+p <= k){
        cout <<l <<" "<< p << endl;
    }else {
        cout <<-1<< endl;
    }
    
    
}

}
