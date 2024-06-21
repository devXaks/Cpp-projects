#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number of elements in the array ";
    cin>>x;
    int arr[x];
    int temp;
    int arr1[x];
    for(int i = 0;i<x;i++){
        cout<<"Enter the element ";
        cin>>temp;

        arr[i] = temp; 
    }
    for(int j =0;j<x;j++){
        int flag = 0;
        for(int k = 0;k<x;k++){
            if(arr[j]== arr1[k]){
                flag = 1;
            }
    }
    if (flag == 0){
        int count = 0;
        for(int l = 0;l<x;l++){
            if(arr[l]== arr[j]){
                count++;
            }
        }
        cout<<arr[j]<<" occurs "<<count<<" times."<<endl;
        arr1[j] = arr[j];
    }
        } 
}
    
    