#include <bits/stdc++.h>
using namespace std;

int main() {
	 int  n ;
	 cin >> n ;
	 vector<int> a(n);
	 for(int i = 0 ; i<n  ; i++){
	     cin >> a[i];
	 }
	 
	 for(int i = 0 ; i<n-1; i++){
	     int minindex = i ;
	     
	     for(int j = i + 1 ; j <n ; j++){
	         if(a[j] <a[minindex]){
	             minindex=j ;
	         }
	     }
	     if(minindex != i){
	         swap(a[i] , a[minindex]) ;
	     }
	     
	     for(int x : a ) cout << x << " " ;
	     cout <<endl;
	 }
	 
	 
	 return 0 ;

}
