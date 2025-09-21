#include<stdio.h>
int main(){
    int pin, amount;

    printf("===================================================\n");
    printf("          WELCOME TO ATM MACHINE             \n");
    printf("===================================================\n\n");

    int choice;
    printf("Please select an option:\n");
    printf("  1 Withdraw Cash\n");
    printf("  2 Check Balance\n");
    printf("  3 Exit\n");
    printf("---------------------------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("\n Please enter your PIN: ");
        scanf("%d", &pin);
        printf(" Enter the amount to withdraw: ");
        scanf("%d", &amount);
        printf("---------------------------------------------------\n");
        if(amount < 500){
            printf("  This is below the required amount! WITHDRAW CANCELLED.\n");
        }
        else{
            printf(" Please collect your cash and card. Thank you!\n");
        }
    }
    else if(choice == 2){
        printf("\n Please enter your PIN: ");
        scanf("%d", &pin);
        printf("---------------------------------------------------\n");
        printf(" Your available balance is: $120,000\n");
    }
    else if(choice == 3){
        printf("\n THANK YOU FOR VISITING, HAVE A GREAT DAY! \n");
    }
    else{
        printf("\n Invalid choice. Please try again.\n");
    }
}