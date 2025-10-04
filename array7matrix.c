#include<stdio.h>
int main(){
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int ar[rows][cols]; // Variable Length Array (C99 and later)

    printf("Enter the matrix elements:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &ar[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}