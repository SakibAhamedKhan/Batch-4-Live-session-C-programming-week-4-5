#include <stdio.h>


int main(){
    int row, col;
    scanf("%d %d",&row, &col); // row =4, col =3
    int arr[row][col];


    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    
    int primarySum=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                primarySum+=arr[i][j];
            }
        }
       
    }
    printf("Primary Diagonal Sum: %d\n",primarySum);


    int secondarySum=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i+j==row-1){
                secondarySum+=arr[i][j];
            }
        }
       
    }
    printf("Secondary Diagonal sum: %d\n",secondarySum);


    return 0;
}