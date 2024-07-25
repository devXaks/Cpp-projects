#include <iostream>

using namespace std; 

int main(){
    int x;
    cin>>x;
    for(int i = 1;i<=x*x;i++){
        if(i%x == 0){
            cout<<i<<" "<<endl;
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}