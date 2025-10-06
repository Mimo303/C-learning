#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Generate the Fibonacci series
    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // The first two terms are 0 and 1
        } else {
            next = first + second; // Next term is the sum of the previous two
            first = second; // Update first to the second term
            second = next; // Update second to the next term
        }
        printf("%d ", next); // Print the next term
    }

    printf("\n");
    return 0;
}
