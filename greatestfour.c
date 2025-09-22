#include <stdio.h>


int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

/*
 * This function takes four integers and returns the greatest of them.
 * It uses the helper `max` function to find the maximum in a clean way.
 */
int max_of_four(int a, int b, int c, int d) {
    // Find the maximum of the first two numbers.
    int max1 = max(a, b);
    
    // Find the maximum of the next two numbers.
    int max2 = max(c, d);
    
    // Return the maximum of the two results.
    return max(max1, max2);
}

int main() {
    int a, b, c, d;
    
    printf("Enter four integers (a b c d): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // Call the function and store the result.
    int ans = max_of_four(a, b, c, d);
    
    // Print the final result to standard output.
    printf("%d", ans);
    
    return 0;
}
