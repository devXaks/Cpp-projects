#include <iostream>

using namespace std; 

int main(){
    int num;
    int revbnry = 0;
    int bnry = 0;
    cin>>num;
    while(num){
        revbnry*=10;
        revbnry+=num%2;
        num/=2;
        cout<<"Current state of num is"<<num<<endl;

        cout<<"Current state of revbinary is"<<revbnry<<endl;

     }
     while(revbnry){
        bnry*=10;
        bnry += revbnry%10;
        revbnry/=10;
        cout<<"Current state of binary is "<<bnry<<endl;
        cout<<"Current state of revbinary is"<<revbnry<<endl;
     }
     cout<<bnry;
     
    return 0;
}