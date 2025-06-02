#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
long long int k ,n , w ;
cin>> k >> n >> w ;

long long int sum =0;
for (long long int i =1 ;i<=w ;i++){
    long long int multip= k * i ;
    sum = sum + multip;
}
if(n>=sum){
    cout <<0<<endl;
}else{
long long int final = abs(sum-n);
cout<< final << endl;
}
return 0;
}
