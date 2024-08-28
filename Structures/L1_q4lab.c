#include <stdio.h>

int main(){
    int stdMarks[5];
    stdMarks[0] = 80;
    stdMarks[1] = 85;
    stdMarks[2] = 70;
    stdMarks[3] = 75;
    stdMarks[4] = 60;
    int sm=0;
    int avg;

    for(int i = 0; i<5;i++){
        sm+= stdMarks[i];

    }
    avg = sm/5;
    printf("The average is %d",avg);


    return 0;
}