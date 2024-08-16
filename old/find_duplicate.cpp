#include <iostream>

using namespace std; 

int main(){
    int arr[20];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    for(int j = 0;j<size;j++){
        for(int k = j+1;k<size;k++){
               if (arr[j] == arr[k]){
                cout<<arr[j];
                break;
            }
            
        }
    }
    return 0;
}