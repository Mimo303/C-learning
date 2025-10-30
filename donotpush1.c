//array practice 
#include<stdio.h>
int main(){
    int arnum[] = {1, 2, 3, 4};
    float ar1num[] = {1.2, 3.4, 5.6};
    char *str[] = {"apple", "ban", "oka"};
    int i;

    // Print all elements of arnum
    for(i = 0; i < 4; i++) {
        printf("%d ", arnum[i]);
    }
    printf("\n");


    // Print all strings
    for(i = 0; i < 3; i++) {
        printf("%s ", str[i]);
    }
    printf("\n");
}