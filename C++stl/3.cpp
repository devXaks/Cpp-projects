#include <iostream>
#include <deque>

using namespace std; 

int main(){
    deque<int> a;

    a.push_back(1);
    a.push_front(2);

    cout<<a.pop_back();

    for(int i:a){
        cout<<i<<" ";
    }

    cout<<"Is empty"<<a.empty();
    
    return 0;
}