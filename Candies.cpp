#include <bits/stdc++.h>
using namespace std;

int main() {
  long long	int n ;
  cin >> n ;
  
  vector <long long > v(n);
  for(long long int i = 0; i<n ;i++){
      cin >> v[i] ;
  }
  
  long long int a , b ;
  cin >> a >> b ;
  long long sum = 0;
  
  for(long long int i =0 ;i < n ; i++){
      if ( i >= a  && i <= b){
          sum = sum + v[i] ;
      }
      
    
  }
  
  cout << sum << endl;

}
