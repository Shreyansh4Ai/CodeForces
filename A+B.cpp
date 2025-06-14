#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here\
	
	int t ;
	cin>>t ;
	while(t--){
	    
	
    int n ;
    cin>> n ;
     
     int lastdigit = n%10 ;
     int firstdigit = n /10 ;
     cout<<lastdigit + firstdigit <<endl;
    
	}

}
