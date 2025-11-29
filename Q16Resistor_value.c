#include <stdio.h>

int main() {
    float r1, r2, min_resistor;
    
    // Prompt user for inputs
    printf("Enter the value of first resistor (in ohms): ");
    scanf("%f", &r1);
    
    printf("Enter the value of second resistor (in ohms): ");
    scanf("%f", &r2);
    
    // Use ternary operator to find minimum
    min_resistor = (r1 < r2) ? r1 : r2;
    
    // Display result
    printf("The minimum resistor value is: %.2f ohms\n", min_resistor);
    
    return 0;
}