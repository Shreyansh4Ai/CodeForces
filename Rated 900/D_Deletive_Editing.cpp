#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n ;
	cin >> n ;
    while(n--){
        string s , t ;
        cin >> s >> t ;
        
        vector<int> frequency_in_t(26,0);
        for(int i = 0 ; i<t.size() ; i++){
            frequency_in_t[t[i]-'A']++ ;
        }
        
        for(int i = s.size()-1 ; i>=0 ; i--){
            
            if(frequency_in_t[s[i] - 'A'] > 0){
                frequency_in_t[s[i] - 'A']-- ;
                
            }else {
                s[i] = '-';
            }
        }
        
        
        string ans ;
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]!='-') ans+=s[i];
            
        }
        
        if(ans == t) cout <<"YES"<<endl;
        else cout <<"NO"<< endl ;
        
    }

}
