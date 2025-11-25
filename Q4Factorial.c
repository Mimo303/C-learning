#include<stdio.h>
int fact(int num){
    int i,facto=1;
    for(i=1;i<=num;i++){
        facto*=i;

    }
    printf("Your factorial is:%d",facto);

}
int main(){
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    fact(num);

}