#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	    int x ;
	    cin >> x ;
	    
	    int small = INT_MAX ;
	   
	    while(x > 0){
	        int digit = x % 10; 
	        small = min(small , digit );
	        x = x / 10 ;
	    }
	    cout << small << endl;
	}

}
