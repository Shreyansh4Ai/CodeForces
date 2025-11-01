#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string s ;
  cin >> s ;
 
 
 
 string sl ;
 cin >> sl ;
 
  transform(s.begin() , s.end() , s.begin() , :: tolower);
  transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
  
  
  
  if ( s == sl) cout << 0 << endl;
  else if(s > sl) cout << 1 << endl ;
  else cout << -1 << endl;
}
