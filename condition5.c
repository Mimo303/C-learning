/* 5. Create a simple calculator. Take two numbers and an operator (+,−,∗,/) from the user.
 Use an if-else if-else structure to perform the correct operation and print the result. If
 the operator is invalid, print an error message.*/

 #include<stdio.h>
 int main(){
    int n1,n2;
    char oppo;
    
    printf("Enter num1:");
    scanf("%d",&n1);
    printf("Enter num2:");
    scanf("%d",&n2);
    printf("Enter the operation sign to perform(*,+,/,-):");
    scanf(" %c",&oppo);
    printf("-------------------------------------------------\n");
    if(oppo=='+'){
        
        printf(" %d is the sum of %d & %d\n",n1+n2,n1,n2);
    }
    else if(oppo=='*'){
        printf(" %d is the product of %d & %d\n",n1*n2,n1,n2);
    }
    else if(oppo=='/'){
        printf(" %d is the division of %d & %d\n",n1/n2,n1,n2);
    }
    else if(oppo=='-'){
        printf(" %d is the subraction of %d & %d\n",n1-n2,n1,n2);
    }
    else{
        printf("Error!! Check again.\n");
    }
    printf("-----------------------------------------------------");

 }