#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {

        ll n, k, x;
        cin >> n >> k >> x;
       
        long long minimum_sum = (k * (k + 1)) / 2;


       long long maximum_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

       if( x>= minimum_sum && x<= maximum_sum){
           cout <<"YES"<<endl;
       }else {
           cout <<"NO"<<endl;
       }
       
       
    }

}