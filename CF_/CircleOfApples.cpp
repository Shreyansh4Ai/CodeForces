#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> b(n+1);
        for(int i = 1 ; i<=n ; ++i){
            cin>>b[i];
        }
     
        sort(b.begin()+1 , b.end());
        int eat = 0 ; 
        int cnt = 0 ;
        for(int i = 1 ; i<=n ; ++i){
            
                if(b[i] > eat ){
                    eat = b[i];
                    cnt++;
                }
            
        }

        cout << cnt << endl;

    }
}