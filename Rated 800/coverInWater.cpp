#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin>> t ;
	while(t--){
	    int n ;
	    cin>> n ;
	    
	    string a ;
	    cin >> a ;
	    
	    int dot = 0;
	    bool three = false ;
	    
	    for(int i = 0 ; i< n ; i++){
	        
	        if(a[i]=='.') dot++ ;
	        
	      
	    }
	    
	    for(int i = 1 ;i< n-1 ;i++){
	          if(a[i-1] == a[i]  && a[i]== a[i+1] && a[i] == '.') {
	           
	             three = true ;
	             break;
	        }
	       
	   
	    }
	    
	    if(three == true){
	        cout << 2 <<endl;
	    }else {
	        cout << dot << endl;
	    }
	    
	    
	}

}
