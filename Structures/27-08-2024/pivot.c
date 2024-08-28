#include <stdio.h>

int main(){
    int arr[5] = {7,9,1,2,3};
    int start = 0;
    int end = 4;
    int mid = start + (end -start)/2;
    while(start<=end){
        if (arr[mid]>arr[mid+1]){
            return (mid+1);
        }
        else if(arr[mid]<arr[mid-1]){
            return (mid);
        }
        else if(arr[mid]>arr[0]){
            start = mid +1;
        }
        else if(arr[mid]<arr[0]){
            end = mid - 1;
        }

        mid = start + (end -start)/2;

        
    }

}