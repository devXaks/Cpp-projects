#include <iostream>

using namespace std; 

int maxval(int args[],int size){
    int maxv = INT16_MIN;
    
    for(int i = 0 ;i<size;i++){
        maxv = max(maxv,args[i]);

    }
    return maxv;
}



int main(){
    int x;
    int arr[20];
    cin>>x;
    for(int j = 0;j<x;j++){
        cin>>arr[j];
    }

    cout<<maxval(arr,x);
    return 0;
}