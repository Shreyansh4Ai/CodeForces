#include<bits/stdc++.h>
using namespace std ;

int main(){

long long int n ;
cin >> n ;
long long even=n/2;
long long odd = (n+1)/2;

long long esum= even * (even + 1) ;
long long osum = odd * odd ;

cout<< esum - osum << endl;


}