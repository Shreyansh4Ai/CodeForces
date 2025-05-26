#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>> t;
    while(t--){
        string s ;
        cin>> s ;
        int l = stoi(s);
        int sum = sqrt(l);

        int a , b ;
        a=sum/2;
        b=sum-a;


        if(((a+b)*(a+b))==l){
            cout<< a<<" "<< b<<endl ;
        }else{
            cout<<"-1"<<endl;
        }


    }

}