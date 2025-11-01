#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t;
    while(t--){

    
    int n ;
    cin >> n ;
    vector<long > a(n);
    for(long i = 0 ; i<n ; i++){
        cin>> a[i];

    }
    int k = abs(a[0] -1);
    for(int i = 1 ; i<n ;i++){
        k = gcd(k , (a[i] - (i+1)));
    }
    cout << k << endl;


}
}