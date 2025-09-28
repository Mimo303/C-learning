/* 5. Create a simple calculator. Take two numbers and an operator (+,−,∗,/) from the user.
 Use switch structure to perform the correct operation and print the result. If
 the operator is invalid, print an error message.*/

 #include<stdio.h>
 int main(){
    int n1, n2;
    char oppo;
    printf("Enter the num1: ");
    scanf("%d", &n1);
    printf("Enter the num2: ");
    scanf("%d", &n2);
    printf("Enter the operator to perform (*,+,-,/): ");
    scanf(" %c", &oppo); // Space before %c

    switch(oppo){
        case '+':
            printf("%d is the sum of %d & %d", n1 + n2, n1, n2);
            break;
        case '-':
            printf("%d is the subtraction of %d & %d", n1 - n2, n1, n2);
            break;
        case '*':
            printf("%d is the product of %d & %d", n1 * n2, n1, n2);
            break;
        case '/':
            if(n2 == 0){
                printf("Error: Division by zero!");
            } else {
                printf("%d is the division of %d & %d", n1 / n2, n1, n2);
            }
            break;
        default:
            printf("ERROR!");
            break;
    }
}