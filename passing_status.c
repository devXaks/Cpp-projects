#include <stdio.h>

int main(){
    int a;
    printf("Enter the marks");
    scanf("%d",&a);

    if (a>90 && a<= 100){
        printf("A");
    }

    else if (a>80 && a<= 90){
        printf("B");
    }
    else if (a>70 && a<=80){
        printf("C");
    }
    else{
        printf("D");
    }
    return 0;
}