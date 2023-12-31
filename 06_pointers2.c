#include <stdio.h>

int main() {
    char key;
    key = 'k';

    char *value_of_key = &key;

    printf("Location of key is %p.\n", &key);
    printf("Value of key is '%s'\n", value_of_key);

    return 0;
}