#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n); // Corrected to pass the address of n
    for(int i = 0; i < 2 * n; i++){
        for(int j = n; j >0; j--){
            printf("%d", 4); // Changed to print the number 4
        }
        printf("\n"); // Added to print a newline at the end of each row
    }
    return 0;
}
