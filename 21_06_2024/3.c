#include<stdio.h>
#include<string.h>
int main(){
    char str1[4] = {'J','O','H','N'};
    int lenstr1 = strlen(str1);
    int sizeofstr1 = sizeof(str1);
    printf("The value of length of string is %d\n",lenstr1);

    printf("The size of string in bytes is %d\n",sizeofstr1);
    printf(str1);
    return 0;
}