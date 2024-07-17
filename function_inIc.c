#include <stdio.h>
// function prototype



int main(){
    int c = sum(3,5);
    printf("%d",c);
    


    return 0;
}

int sum(int,int);


//function definition
int sum(int a , int b){
    return a+b;
}