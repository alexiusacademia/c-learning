#include <stdio.h>

int main() {
    int arr[10];

    // Size of the array 
    size_t size_of_array = sizeof(arr);

    printf("The size of the array is %zu bytes.\n", size_of_array);

    return 0;
}