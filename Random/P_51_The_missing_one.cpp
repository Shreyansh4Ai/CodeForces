#include<bits/stdc++.h>
using namespace std ;

int main(){
    long int n;
    cin >> n ;
    vector<int> a(n);
    for(int i = 1 ; i<=n ; i++){
        cin>> a[i];

    }

    sort(a.begin(), a.end());

    for(long int i = 1; i<=n ; i++){
        if(a[i] != i) {
            cout << i << endl;
            break ;
    }
    }

}