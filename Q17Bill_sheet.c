#include <stdio.h>

int main(void) {
    float resistance, voltage, power, current;

    printf("Enter the Resistance: ");
    scanf("%f", &resistance);

    printf("Enter the Voltage: ");
    scanf("%f", &voltage);

    printf("Enter the Power: ");
    scanf("%f", &power);

    printf("Enter the Current: ");
    scanf("%f", &current);

    printf("\nElectrical Quantity        Value     Unit\n");
    printf("----------------------------------------\n");
    printf("Resistance                 %.2f      ohm\n", resistance);
    printf("Voltage                    %.2f      volt\n", voltage);
    printf("Current                    %.2f      ampere\n", current);
    printf("Power                      %.2f      watt\n", power);

    return 0;
}