#include <iostream>
#include <array>

using namespace std; 

int main(){
    array<int,5> a = {1,2,3,4,5};
    // cout<<a[0]<<" ";
    // cout<<a.at(2)<<" ";
    // cout<<a.empty()<<" ";
    // cout<<a.front()<<" ";
    // cout<<a.back()<<" ";
    for(int i:a){
        cout<<i<<" ";
    }
    


    
    return 0;
}