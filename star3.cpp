#include<iostream>
using namespace std;
int main(){
    int x = 0;
    cout<<"Enter the number = ";
    cin>>x;
    for(int i = 1;i<=x;i++){
        for(int k =1;k <=2*i;k= k+2){
            cout<<"* ";
        
        }
        cout<< "\n";
        for(int j=1;j<= 2*i;j=j+2 ){
            cout<<" *";
        }
        cout<< "\n";
        
    }

    }