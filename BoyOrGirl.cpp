#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>> s ;
    
    set<char>unique;
    for(char c : s ){
        unique.insert(c);
    }
   int a=unique.size();
    if(a%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}