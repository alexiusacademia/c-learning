#include <stdio.h>

void get_nums(int *numbers) {
    printf("Length of numbers is %lu.\n", sizeof(&numbers));

    numbers[0] = 6;

    // Print from this function.
    printf("First element is %i.\n", numbers[0]);
    printf("Second element is %i.\n", numbers[1]);
    printf("Last element is %i.\n", numbers[8]);
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6};

    get_nums(numbers);

    // Call again from this function
    printf("First element is %i.\n", numbers[0]);

    return 0;
}