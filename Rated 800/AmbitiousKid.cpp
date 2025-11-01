#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>> n;

	vector <int> a(n) ;
	for(int i = 0 ; i< n ; i++){
	    cin>>a[i];
	}
	
	sort(a.begin(), a.end() , [](int l , int b){   // main concept 
	return abs(l)<abs(b);
	});
	
	
 //	for(int num : a ){                     to output all the array
 //	    cout <<num << " "<< endl;
//	}
   if (a[0] >0){
   cout <<a[0]<<endl;	
   }else{
       cout << abs(a[0]) << endl;
   }

}
