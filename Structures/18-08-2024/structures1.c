#include <stdio.h>
#include<string.h>

int main(){
    typedef struct pk{
        int id;
        int power;
        int attack;
        char name[10];
    }pokemon;
    
    pokemon arr[3];

    for(int i = 0; i<3;i++){
        // scanf("%d %d %d %[^\n]s",arr[i].id,arr[i].power,arr[i].attack,arr[i].name);
        scanf("%[^\n]s",arr[i].name);
    }

    for(int j = 0 ; j<3;j++){
        printf("%s",
        arr[i].name);
    }

    return 0;

}