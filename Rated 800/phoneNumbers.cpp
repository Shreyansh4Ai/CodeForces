#include <bits/stdc++.h>
using namespace std;

int main() {
	int  n ;
	cin >> n ;
   string s ;
   cin >> s ;
   
   int eights = 0 ;
   
   for(char c : s ){
       
       if(c == '8') 
       eights++;
       
   }
   int max_phones = min( eights , n / 11 );
   
   cout << max_phones << endl;
}
