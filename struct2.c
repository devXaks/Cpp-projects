#include <stdio.h>

int main(){
    struct book{
        char auth;
        float price;
        int bId;
    }whisperingInTheDark,jungleBook;
    whisperingInTheDark.bId = 001;
    whisperingInTheDark.auth = "R";
    whisperingInTheDark.price = 60.66;
    printf("%d",whisperingInTheDark.price);
    return 0;
}