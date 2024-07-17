#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age  : ";
    cin>>age;
    switch(age){
        case(18):
            cout<<"You are a kid and will be a given a kids pass";
            break;
        
        case(2):
        cout<<"You are 2 years old";

        default:
        cout<<"You are allowed";

    }
}