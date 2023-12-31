#include <stdio.h>

int main() {
    int age = 35;
    float height = 1.57;

    int *age_ptr = &age;

    printf("Value of age is %i.\n", *age_ptr);
    printf("Address of age is %p.\n", age_ptr);

    printf("Changing value of age with pointer.\n");
    *age_ptr = 36;
    printf("Value of age now is %i.\n", *age_ptr);
    printf("Value of age from original variable is %i.\n", age);

    return 0;
}