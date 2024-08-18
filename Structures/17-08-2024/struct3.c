#include <stdio.h>
#include <string.h>


int main(){
    char name[50];
    // name = "Akshat Tripathi";
    // If you try to copy just like this it wont work; you must use strcpy function;
    strcpy(name,"Akshat Tripathi");
    printf("%s",name);
    
    return 0;
}