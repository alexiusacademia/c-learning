#include <stdio.h>
#include <string.h>

int main() {
    char term[] = "The quick brown fox jumps over the lazy dog.";
    int term_loc = term;

    printf("Location of the string is %i\n", term_loc);

    char search[] = "brown";

    int result = strstr(term, search);

    if (result) {
        printf("The term is found!\n");
    } else {
        printf("The term cannot be found!\n");
    }

    printf("The result is %i.\n", result);
    printf("Index of the search term is at %i.\n", result - term_loc);

    return 0;
}