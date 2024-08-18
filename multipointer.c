#include <stdio.h>
typedef int* pointer;
int main(){
    int a = 7,b =8;
    pointer  c = &a, d = &b;
    // idhar it doesnt work correctly
    printf("%d %d",a,b);
    printf("%p",c); 
    return 0;
}