#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    int t ;
    cin>> t ;

    while(t--){

      long int n ;
        cin>> n ;

        long long  a[n];
        for(int i = 0 ; i<n ;i++){
            cin>>a[i];
        }
        
        map<long long , long long > freq_map ;
        for(int i =0 ; i<n ;i++){
            freq_map[a[i]]++ ;
        }

        if(freq_map.size() >=3){
            cout <<"NO"<<endl;
        }else{
          
          long long int   freq1 = freq_map.begin()->second ;
          long long int freq2 = freq_map.rbegin()->second ;

          if(freq1 == freq2){
            cout <<"YES"<< endl;

          }else if(n%2 == 1 && abs(freq1 - freq2)== 1) {
             cout <<"YES"<<endl;
          }
           else 
           cout << "NO"<<endl;

        }
         
        


    }


    return 0 ;
}