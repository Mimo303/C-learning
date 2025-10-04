/* 5. Quadratic Equation Roots (If/Else): Write a program that takes the coefficients A,B,C
 of a quadratic equation (Ax2+Bx+C=0). Use conditional logic to determine the nature
 of the roots based on the discriminant (Δ=B2−4AC):
 ○ Δ>0: Print "Two distinct real roots"
 ○ Δ=0: Print "One real root"
 ○ Δ<0: Print "Two complex roots"*/

 #include<stdio.h>
 int main(){
    int A,B,C,roots;
    printf("Enter the Coefficient of the Quadratic Equation:\n");
    printf("Value of A:");
    scanf("%d",&A);
    printf("Value of B:");
    scanf("%d",&B);
    printf("Value of C:");
    scanf("%d",&C);
    roots=(B*2)-(4*A*C);
    if(roots>0){
        printf("Two distinct roots");
    }
    else if(roots==0){
        printf("One real root");
    }
    else if(roots<0){
        printf("Two complex roots");
    }
    else{
        printf("ERROR!!");
    }
 }