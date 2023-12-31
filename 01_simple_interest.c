#include <stdio.h>

// Calculation for simple interest
// Author: syncster31 
// Date: December 16, 2023
int main() {
    int p, n;
    float r, si;

    p = 1000;
    n = 3;
    r = 8.5;

    // Formula for simple interest
    si = p * n * r / 100;
    printf("%f\n", si);

    return 0;
}