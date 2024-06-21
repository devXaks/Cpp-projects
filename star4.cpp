#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Input the no of stars in last line : ";
    cin>>x;
    for(int i =  1; i <= x;i++){
        for(int j=1;j<= x-i;j++){
            cout<<" ";

        }
        for(int k = 1;k<=i;k++){
            cout<<"* ";
        }
        

        cout<<"\n";
    }

        for(int i =  x; i >= 2;i--){
        for(int j=x-i-1;j>= 1;j--){
            cout<<" ";

        }
        for(int k = 1;k<=i;k++){
            cout<<"* ";
        }
        

        cout<<"\n";
    }



}