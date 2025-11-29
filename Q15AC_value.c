#include <stdio.h>
#include <math.h>

int main() {
    double Vm, omega, t, voltage;
    
    // Prompt user for inputs
    printf("Enter peak amplitude Vm: ");
    scanf("%lf", &Vm);
    
    printf("Enter angular frequency omega (rad/s): ");
    scanf("%lf", &omega);
    
    printf("Enter time t (seconds): ");
    scanf("%lf", &t);
    
    // Calculate instantaneous value
    voltage = Vm * sin(omega * t);
    
    // Display result
    printf("Instantaneous value v at t = %.2f s is: %.2f\n", t, voltage);
    
    return 0;
}