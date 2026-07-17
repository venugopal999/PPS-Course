
// Week - 1: Program for Simple and Compound Interest
// Objective: Demonstrate simple math operations/calculations
// Author: Venu Goapl


#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, SI, CI;

    printf("Enter Principal, Rate (in %), Time (in years): ");
    scanf("%f %f %f", &principal, &rate, &time);

    // Simple Interest
    SI = (principal * rate * time) / 100.0;

    // Compound Interest
    CI = principal * pow((1 + rate / 100.0), time) - principal;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}

