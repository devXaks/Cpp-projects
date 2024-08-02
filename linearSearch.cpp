#include <iostream>

using namespace std; 

bool binarySearch(int arr[],int size,int key){
    for(int j =0;j<size;j++){
        if(arr[j]==key){
            return 1;
        }
    }
        return 0;

}

int main(){
    int arr[20];
    int size;
    int key;
    cout<<"Enter the size of the array ";
    cin>>size;
    cout<<endl<<"Enter the elements ";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Enter the element to search : ";
    cin>>key;

    int found = binarySearch(arr,size,key);
    if(found){
        cout<<"Key found";
    }
    else{
        cout<<"Key Absent";
    }


    return 0;
}