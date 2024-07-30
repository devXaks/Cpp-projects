#include <iostream>

using namespace std; 

int main(){
    int num;
    cin>>num;
    int ctr;
    ctr = num;
    for (int i = ctr; i = num; i++){
        for(int j =ctr; j<= num;j++){
            cout<<j<<" ";
            
        }
        ctr--;
        cout<<"\n";

        if(ctr == 0){
            break;
        }
    }
    return 0;
}