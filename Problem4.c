#include <stdio.h>


int main(){
    int row, col;
    scanf("%d %d",&row, &col); // row =4, col =3
    int arr[row][col];

    // scanf("%d %d %d",&arr[0][0], &arr[0][1], &arr[0][2]);
    // scanf("%d %d %d",&arr[1][0], &arr[1][1], &arr[1][2]);
    // scanf("%d %d %d",&arr[2][0], &arr[2][1], &arr[2][2]);
    // scanf("%d %d %d",&arr[3][0], &arr[3][1], &arr[3][2]);

    // printf("%d %d %d\n",arr[0][0], arr[0][1], arr[0][2]);
    // printf("%d %d %d\n",arr[1][0], arr[1][1], arr[1][2]);
    // printf("%d %d %d\n",arr[2][0], arr[2][1], arr[2][2]);
    // printf("%d %d %d\n",arr[3][0], arr[3][1], arr[3][2]);

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}