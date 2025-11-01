#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main() {
    
    int  t;
    cin >> t ;
    while(t--){
        ll n ;
        cin >> n ;
    
        vector<ll> a(n);
        for(int i = 0 ; i< n ; i++){
            cin >>a[i];
        }

        ll mx = *max_element(a.begin(), a.end()); // sql query 
        vector<ll> b , c ;
        for(int i = 0 ; i<n ;i++){
            if(a[i] != mx){
                b.push_back(a[i]);

            }else {
                c.push_back(a[i]);
            }

        }

        if(b.size() == 0 ){ // all elements are max and same 
           cout <<-1<<endl;
        }else{
            cout << b.size() <<" "<<c.size()<<endl;
 
           for(auto it : b){
            cout << it <<" ";
           }
           for(auto it :c ){
            cout << it <<" ";
            cout<<endl;
           }
        }


    }

    return 0;
}