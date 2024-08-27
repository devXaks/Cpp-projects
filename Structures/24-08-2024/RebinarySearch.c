#include <stdio.h>
int main(){
    int arr[5] = {0,1,1,2,-1};
    int start = 0;
    int end = 4;
    int mid = start + (end - start)/2;
    int greatest;
    while(start <= end){
        greatest = arr[mid];

        if(greatest > arr[mid -1]){
            start = mid-1;

        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;


    }
    printf("Greatest no in the array is %d",greatest);
    return 0;
}