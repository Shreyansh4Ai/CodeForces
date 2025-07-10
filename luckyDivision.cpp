#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >> n ;
	
	int luck[] = {4 , 7 , 44 , 77 ,47 ,74 ,444 , 777, 474 ,747 ,447 ,744 ,774 ,477,744};
	
	bool t  = true;
	
	for(int i = 0 ; i < 15 ; i++){
	    if( n % luck[i] == 0){
	        t = false; 
	        cout <<"YES"<<endl;
	        break;
	    }
	}
	if(t == true) cout <<"NO" << endl ;

}
