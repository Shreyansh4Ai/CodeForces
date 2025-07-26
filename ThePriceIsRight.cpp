#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cin >> n ;
	
	vector<int> p(n);
	for(int i = 0 ; i< n ; i++){
	    cin >> p[i];
	}
	
	int max = INT_MAX ;
	int j = 0;
	for(int i = 0 ; i< n ;i++){
	    if(p[i]< max){
	        max = p[i];
	        
	        j = i ;
	    }
	}
	

	
		cout << j<<endl;

}
