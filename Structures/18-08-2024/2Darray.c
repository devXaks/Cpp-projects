#include <stdio.h>

int main(){
    //convential way of declearing an array;
    int arr[2][2];
    arr[0][0] = 0;
    arr[0][1] =1;
    arr[1][0] = 2;
    arr[1][1] = 3;

    printf("%d",arr[0][1]);
    printf("\n");

    // Smarter way of declearing of an array

    int crr[2][2] = {{1,2},{3,4}};
    printf("%d",crr[0][0]); 
    return 0;
}