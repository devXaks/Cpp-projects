#include <stdio.h>

int main(){
    int row;
    int col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i = 0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int k = 0;k<row;k++){
        for(int l =0;l<col;l++){
            printf("%d ",arr[k][l]);
        }
        printf("\n");
    }    



    return 0;
}