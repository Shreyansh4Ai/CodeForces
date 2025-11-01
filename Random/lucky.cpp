#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t ;
cin>>t  ;
while(t--){
    string s ;
    cin>>s  ;
    
    std::vector<int> num ;
    
    for(char ch : s){            // str to int 
        num.push_back(ch-'0');
    }
    
        if ((num[0] + num[1] + num[2]) == (num[3] + num[4] +num[5])){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
         }
    
}
}
