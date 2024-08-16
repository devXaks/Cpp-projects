#include <stdio.h>

int main(){
    int x = 5;
    // scanf("%d",x);
    for(int i = 1;i<=x;i++){
        for(int j = i;j<=x;j++){
            printf(" ");
        }
        for(int k =1;k<2*i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}