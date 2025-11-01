#include <bits/stdc++.h>
using namespace std;

int main() {
	int a , b ;
	cin>> a >> b ;
	int rb=min(a,b);
	int single=(max(a,b) - rb)/2;
	
	cout<<rb<<" "<<single<<endl;
	

}