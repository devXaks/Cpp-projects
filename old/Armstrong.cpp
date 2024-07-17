#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int x;
    int y;
    int i = 0;
    int sum = 0;
    int z = 0;
    int j = 0;

    cout<<"Program to check amstrong number : "<<endl;
    cout<<"Enter the number  : ";
    cin>>x;
    y=x;
    z=x;
    while(x>0){
        x = x/10;
        i++;


    }
    for(int n  =  1;n<=i;n++){
        j = y%10;
        y = y/10;
        sum = sum + pow(j,i);
        cout<<"The value of j "<<j<<endl;
        cout<<"Y is"<<y<<endl;
        cout<<sum<<endl;
        
    }
    
    if(sum == z){
        cout<<z<< " is an Amstrong no"<<endl;
    }
    else{
        cout<<z<<" is not an Amstrong no";
    }

}