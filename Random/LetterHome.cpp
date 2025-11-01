#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin>> t ;
	while(t--){
	    int n , s ;
	    cin>>  n >> s ;
	    vector <int> a(n) ;
	    
	    for (int i = 0 ; i< n ; i++){
	        cin>> a[i];
	        
	    }
	    
	    int l = abs(s-a[0]) + (a[n-1] - a[0]) ;
	    int m = abs(s-a[n-1]) + (a[n-1] - a[0]) ;
	    
	    cout << min(l,m) << endl;
	    
	}

}
