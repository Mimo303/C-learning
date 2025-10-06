/* 4. Reverse a Number: Write a program that takes an integer as input (e.g., 12345) and
uses a loop (e.g., while loop with modulo and division) to reverse the number and print
 the result.
 ○ Example: Input 12345. Output: 54321*/

#include <stdio.h>

int main() {
    int num, rev = 0, last_digit;

    // Ask the user for the input number
    printf("Enter an integer to reverse: ");
    scanf("%d", &num);

    // Handle the case if input is 0
    if (num == 0) {
        printf("Reversed number: 0\n");
        return 0;
    }

    // Reverse the number using a while loop
    while (num > 0) {
        last_digit = num % 10;  // Extract the last digit (e.g., 5 from 12345)
        rev = rev * 10 + last_digit;  // Build the reversed number (e.g., 5, then 54, etc.)
        num = num / 10;  // Remove the last digit (e.g., 1234 from 12345)
    }

    // Print the reversed number
    printf("Reversed number: %d\n", rev);

    return 0;
}
