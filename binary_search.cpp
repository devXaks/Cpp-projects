#include <iostream>
using namespace std; 

bool binarySearch(int arr[],int key){
    int start = 0;
    int end = 5;

    while(arr[((start+end)/2)] != key ){
        if(start== end){
            return false;
        }
        else if(arr[((start+end)/2)] > key ){
            end=((start+end)/2)-1;
        }
        else if (arr[((start+end)/2)] < key){
            start=((start+end)/2)+1;
        }

    }

    return true;




}

int main(){
    int arr[6] = {1,4,5,9,12,16};
    int key = 16;
    bool output = binarySearch(arr,key);
    cout<<output;
    return 0;

}