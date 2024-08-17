#include <stdio.h>
#include<string.h>


int main(){
    struct Person {
        char name[40];
        int salary;
        int age;
    };

    struct Person person1;
    person1.age = 40;
    strcpy(person1.name,"Rajesh");
    person1.salary = 90000;

    printf("%s",person1.name);    
    return 0;
}