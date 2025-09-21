#include<stdio.h>
int main(){
    float s1,s2,s3;
    printf("Enter the 3 sides of the triangle\n");
    printf("Side 1:");
    scanf("%f",&s1);
    printf("Side 2:");
    scanf("%f",&s2);
    printf("Side 3:");
    scanf("%f",&s3);
    printf("___________________________________________________\n");
    if(s1==s2 && s2==s3){
        
        printf("THE GIVEN TRIANGLE IS AN EQUILATERAL TRIANGLE\n");
        
    }
    else if(s1==s2 || s2==s3 || s1==s3){
        printf("THE GIVEN TRIANGLE IS AN ISOSCELES TRIANGLE\n");
    }
    else{
        printf("THE GIVEN TRIANGLE IS A SCALENE TRIANGLE\n");
    }
    printf("_______________________________________________________");


}   