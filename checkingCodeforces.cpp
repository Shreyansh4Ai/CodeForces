#include <bits/stdc++.h>
using namespace std;

void solve (){
    
    string s = "codeforces" ; 

    char c ;
    cin>> c ;
    bool p = true ;
    for(int i = 0 ; i< s.size() ; i++){
        if(s[i] == c ) {
            cout <<"YES" << endl;
            p = false ;
            break ;
        }
    }
    if (p == true ){
        cout << "NO" <<endl;
    }
    
    
    
    
    
}
int main() {
	
	
	int  t ; 
	cin>> t ;
	while(t--){
	    solve () ;
	}

}
