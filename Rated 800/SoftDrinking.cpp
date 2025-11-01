#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n , k , l , c , d , p , nl ,np;
cin>> n >> k >> l >> c >> d >> p >> nl >> np;

int toast = (k*l)/nl ; 
int limes = c*d  ;
int salt = p/np;
cout<< min({toast , limes , salt} ) / n << endl;
}
