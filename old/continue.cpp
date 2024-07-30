#include <iostream>

using namespace std; 

int main(){
    for(int i = 0; i <= 5;i++){
        cout<<"HI "<<endl;
        cout<<"Hey "<<endl;
        if(i ==  5){
            continue;
        }
        cout<<"Reply toh karde";
    }
    return 0;
}