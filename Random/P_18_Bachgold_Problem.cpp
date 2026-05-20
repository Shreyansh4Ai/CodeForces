#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n ;
    cin >> n ;
    
    if(n%2 == 0) {
        int l = n/2 ;
        cout << l << endl;
      for(int i = 0 ; i<l ; i++){
          cout << 2 << " ";
      }
    }
      else{
          int l = n/2 - 1  ;
          cout << l+1 << endl;
          for(int i = 0 ; i< l ;i++){
              cout << 2 << " ";
          }
          cout << 3 ;
      
    }
}