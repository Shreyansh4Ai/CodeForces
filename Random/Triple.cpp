#include<bits/stdc++.h>
using namespace std ;
int main(){
     int t ;
     cin>>t ; 
     while(t--){



   long long int n ;
    cin>> n ;

    vector<long long int > a(n);
    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end()) ;
    bool count = false;
    for(int i = 0 ;i<n-2 ;i++){
         if(a[i] == a[i+1] && a[i+1] == a[i+2]){
            cout<<a[i];
            i = i+2 ; 
            count = true ;
            break;
         }

    }
    if(count == false ) cout <<"-1";
    cout<<endl;

}
}