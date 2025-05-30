
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
long long int n ;
cin>>n ;
   long long int count=0;
   long long int lastdigit =0;
    while(n>0){
        lastdigit=n%10;
        if(lastdigit==4 || lastdigit==7){
            count++;
        }
        n=n/10;
    }
    if(count==4 || count == 7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}