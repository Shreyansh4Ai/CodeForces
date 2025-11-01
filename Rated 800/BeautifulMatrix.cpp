#include<bits/stdc++.h>
using namespace std ;

int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (arr[i][j]==1){
                i=i-2;
                j=j-2;
                if(i<0){
                    i=i*(-1);
                }if(j<0){
                    j=j*(-1);
                }
                cout<<i+j<<endl;
                return 0;
            }
        }
    }

    return 0 ;
}