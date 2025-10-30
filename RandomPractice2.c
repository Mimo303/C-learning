#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("how many rows:");
    scanf("%d",&r);
    printf("how many columns:");
    scanf("%d",&c);

    int ar[r][c];
    
    printf("Enter the matrix elements\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&ar[i][j]);
        }
    }

    printf("Your martix:\n");
    for(i=0;i<c;i++){
        for(j=0;j<c;j++){
            printf(" %d ",ar[i][j]);
        }
        printf("\n");
    }
    
}