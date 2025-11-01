#include <bits/stdc++.h>
using namespace std;

int main() {

int n ;
cin >> n ;
int rnk = 1 ;
int thms = 0 ;
for(int i = 1 ; i<5 ; i++){
int a , b , c , d ;
cin >> a >> b >> c >> d ;
int sum = a+b+c+d ;

if (i == 1){
    thms = sum ;
}

if(sum > thms){
    rnk++;
}



}
cout<< rnk << endl;
}
