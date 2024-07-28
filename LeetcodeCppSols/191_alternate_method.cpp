#include <iostream>

using namespace std; 

int main(){
    int n;// accept it from the public function.
    int count  = 0;
    while(n != 0){
        if (n&1){
            count++;
        }
        n=n>>1;
    }
    return 0;
}