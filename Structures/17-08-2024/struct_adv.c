#include <stdio.h>
int main(){

    typedef struct pk{
        int hp;
        int speed;
        int attack;
        char tier;

    }pokemon;

    pokemon arr[10];
    arr[0].attack = 100;
    arr[0].hp =100;
    arr[0].tier = "A";
    
    return 0;
}