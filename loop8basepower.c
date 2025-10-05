/* Calculate Power (While Loop): Write a program that takes a base number b and an
 exponent e (a non-negative integer) as input. Use a while loop to calculate be (b to the
 power of e) without using any built-in power function.*/

 #include<stdio.h>
 int main(){
    int i = 0, base, power, value = 1;
    printf("Enter the base (non-negative): ");
    scanf("%d", &base);
    printf("Enter the power (non-negative): ");
    scanf("%d", &power);

    while(i < power){
        value *= base;
        i++;
    }
    printf("%d\n", value);
    return 0;
 }