#include <iostream>

using namespace std; 
void swapAlternative(int arr[], int size){

    if(size%2 == 0){
    for(int i  = 0;i<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
    }
    else{
        for(int i  = 0;i<size-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
    }
}

int main(){
    int arr[20];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    swapAlternative(arr,size);

    for (int j = 0; j < size; ++j) {
        cout << arr[j]<<" ";
    }



    return 0;
}