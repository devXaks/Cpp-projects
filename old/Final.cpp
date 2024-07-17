#include<iostream>
using namespace std;
int main(){
    int rw=0,clmn=0;
    cout<<" Enter the number of rows : ";
    cin>>rw;
    cout<<"\n";
    cout<<"Enter the number of columns :  ";
    cin>> clmn;
    for(int i=1;i<=rw;i++){
        for(int j = 1;j<=clmn;j++){
            for(int k = rw;k>=i;k--){
                cout<<"*";
                

            }
            for(int l = 1;l<=2*i;l++){
                cout<<" ";
            }
            for(int m = rw; m>=i;m--){
                cout<<"*";
            }

        }
        cout<<"\n";
    }

}