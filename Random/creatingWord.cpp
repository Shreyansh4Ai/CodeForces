#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>>t ;
while(t--){
    string a ;
    cin>> a ;
        string b ;
    cin>>  b ;


  char temp = a[0];
  
  char temp2 = b[0];
    
    a[0] = temp ;
    b[0] = temp2 ;
    
    cout<<a<<" "<<b<< endl;
}
}
