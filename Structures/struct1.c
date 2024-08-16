#include <stdio.h>

int main(){
    struct student
    {
        int uid;
        int age;
        float percentage;

    };
    
    struct student aks;
    aks.age = 17;
    aks.percentage = 98.2;
    aks.uid = 001;
    printf("%d",aks.age);
    
    return 0;
}