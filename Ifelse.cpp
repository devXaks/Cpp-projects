#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age : ";
    cin>>age;
    if((age >=1)&& (age<10)){
        cout<<"You are not allowed to the party" ; 
    }
    else if (age==18){
        cout<<"You are a kid and will be given a kids pass to the party";
    }
    else if (age<1){
        cout<<"You are not born yet";
    }
    else{
        cout<<"You are allowed to the party";
    }
}
