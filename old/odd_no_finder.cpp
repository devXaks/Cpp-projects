#include <iostream>

using namespace std; 

int main(){
    int x;
    cin>>x;
    if(x&1==1){
        cout<<"odd";
    }
    else{
        cout<<"even";
    }
    return 0;
}