#include<bits\stdc++.h>
using namespace std ;
using ll = long long ;


 int min_ops(string n , string poss_val){
            int ops = 0 ; 
            int checker_indx = poss_val.size()-1 ;

            for(int i = n.size()-1; i>=0 ; i--){
                if(n[i] == poss_val[checker_indx]){
                    checker_indx--;

                    if(checker_indx < 0) break ;
                }else{
                    ops++;
                }
            }
            
            if(checker_indx >= 0) return INT_MAX;

            return ops;
    }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

   

    ll t ;
    cin >> t ;
    while(t--){
        string n ;
        cin >> n ;
            
         vector<string> poss_vals ={"00","25" ,"50","75"};
         int ans =INT_MAX;

         for(auto poss_val : poss_vals){
            ans=min(ans , min_ops(n , poss_val));
         }
         
         cout<<ans<<endl;
    }
return 0 ;
}