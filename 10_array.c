#include <stdio.h>

int main() {
    int contestants[] = {4, 2, 3};
    int *choice = contestants;

    printf("Size of choice is %d.\n", sizeof(choice));
    printf("Size of the array is %d.\n", sizeof(contestants));

    return 0;
}