#include <stdio.h>   
int reverse_number(int num) {
    int reversed = 0;  
    int original = num;  
    
    
    while (num > 0) {  
        int last_digit = num % 10; 
        reversed = reversed * 10 + last_digit;  
        num = num / 10;  
    }
    
    return reversed;  
}


int is_palindrome_number(int num) {
    int flipped = reverse_number(num);  
    
    if (num == flipped) {
        return 1;  
    } else {
        return 0; 
    }
}


int main() {
    int user_number;  
    
    
    printf("Enter a positive number to check if it's a palindrome: ");
    scanf("%d", &user_number);  
    
    
    if (user_number < 0) {
        printf("Sorry, let's stick to positive numbers for now! Try again. \n");
        return 1; 
    }
    
    
    if (is_palindrome_number(user_number)) {
        printf("%d is a palindrome number! It looks the same flipped. \n", user_number);
    } else {
        printf("%d is not a palindrome. Flipped, it's %d! \n", user_number, reverse_number(user_number));
    }
    
    return 0;  // Done!
}
