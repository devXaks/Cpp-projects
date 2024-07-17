#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Program to print prime no uptil given no \n Enter the no"<< endl;
    cin >>x;
    for(int i = 2;i<=x;i++){
        int flag  = 0;
        for(int j = 2;j<i;j++){
            if(i%j == 0){
                flag = 1;
            }
        }
        if(flag == 0){
            cout<< i<<endl;
        }
    }
}