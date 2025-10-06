/* 3. Find the Greatest Common Divisor (GCD): Write a program that takes two positive
 integers, A and B, and uses a loop to find their Greatest Common Divisor (GCD) using
 the Euclidean algorithm (repeated subtraction or modulo).*/

 #include <stdio.h>

int main() {
    int a, b;

    // Step 1: Get two positive integers from the user
    printf("Enter two positive integers A and B: ");
    scanf("%d %d", &a, &b);

    // Step 2: Use the Euclidean algorithm to find GCD
    while (b != 0) { // Continue until b becomes 0
        int temp = b; // Store the current value of b
        b = a % b;    // Update b to be the remainder of a divided by b
        a = temp;     // Update a to be the previous value of b
    }

    // Step 3: When b is 0, a contains the GCD
    printf("GCD is: %d\n", a);

    return 0; // End of the program
}
