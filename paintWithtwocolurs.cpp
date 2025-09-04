#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while(t--){
        long long n,a,b;
        cin >> n >> a >> b;
 
        if(b == n){
            cout << "YES\n";
            continue;
        }
        if( ( (n - b) & 1LL ) ){ // blue can't be centered
            cout << "NO\n";
            continue;
        }
        if(a <= b){
            cout << "YES\n"; // place red inside blue
            continue;
        }
        // a > b: red must also be centered
        cout << ( ( (n - a) & 1LL ) ? "NO\n" : "YES\n");
    }
    return 0;
}
