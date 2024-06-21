#include<iostream>
using namespace std;
int main(){
    int i = 0;
    int j = 1;
    int l;
    int x;
    cout<<" Enter the series limit : ";
    cin>>x;
    cout<< i<<endl;
    for(int k = 0 ; k<=x;k++){
        cout<<j<<endl;
        k=j;
        j = j+i;
        i = k;

        
    }
}