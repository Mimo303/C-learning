//Write a program to enter temperature in Fahrenheit and convert it in Celsius.
#include<stdio.h>
void F(float f){
    float C;
    C=(f-32)*5/9;
    printf(" %f degree celsius",C);
}
void C1(float c){
    float f;
    f=(c+32)*9/5;
    printf("\n %f fahrenheit degree",f);
}
int main(){
    float f1,c;
    printf("Enter the fahrenheit degree: ");
    scanf("%f",&f1);
    printf("Enter the celcius degree: ");
    scanf("%f",&c);
    F(f1);
    C1(c);
    
}