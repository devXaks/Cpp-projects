#include <stdio.h>

int factorial(int);

int factorial(int a){

    if (a == 0 || a==1){
        return 1;
    }
    return factorial(a-1)*a;
}

int main(){
    printf("%d",factorial(5));
    return 0;
}