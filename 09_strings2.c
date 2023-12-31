#include <stdio.h>

int main() {
    char name[] = "Alex";

    // Get the first character
    char first_char = *name;
    printf("First char of name is %c.\n", first_char);

    // Address of first char
    char *addr_first_char = &first_char;
    
    printf("Address of name is %p.\n", addr_first_char);

    // Second char
    addr_first_char++;
    
    printf("Address of next character of name is %p.\n", addr_first_char);
    char second_char = *addr_first_char;

    printf("Second character is %c.\n", name[1]);

    return 0;
}