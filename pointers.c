#include <stdio.h>

int main() {
    int age = 35;

    printf("Value of age is %i.\n", age);

    int *address_of_age = &age;
    printf("Location of age is at %p.\n", address_of_age);
    printf("Value of age is %i.\n", *address_of_age);

    return 0;
}