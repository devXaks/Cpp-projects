#include <stdio.h>

int main(){
    for (int i = 0;i<15;i++){
        if(i==5){
            continue;
        }

        if (i==10){
            break;
        }
        printf("this is step %d of loop \n",i);
    }
    return 0;
}