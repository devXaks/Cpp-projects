#include <iostream>  
using namespace std;
int main() {
    for(int i = 1;i<=5;i++){
        for(int k =5;k>=i;k--){
        cout<<"*";
        }
        
        for(int j = 1;j<= 2*i;j=j+1){
            cout<<" ";


        }
        for(int k = 5; k >= i; k--){
            cout<<"*";
        }
       cout<<"\n";

    }
    return 0;

}