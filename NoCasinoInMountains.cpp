#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while(t--){
	  long long int n , k ;
	    cin >> n >> k ;
	    
	    vector <long long int  > a(n);
	    for(long long int i = 0 ; i< n ;i++){
	        cin >> a[i];
	    }
	    int hike = 0 ;
	    int cnt = 0 ;
	    
	    for(long long int i = 0 ; i< n ; i++){
	        if (a[i]==0) cnt ++;
	        else cnt = 0 ;
	        
	        
	     if(cnt == k ) {
	         hike++;
	         cnt = -1 ;
	         
	     }
	     
	     
	    }
	    
	    cout << hike << endl;
	    
	    
	}

}
