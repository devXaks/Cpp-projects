#include <iostream>

using namespace std; 

int main(){
    int x;
    cin>>x;
    int rev = 0;
    
    while(x){
        rev*=10;
        rev+= x%10;
        x/=10;
    }
    cout<<rev; 
    return 0;
}