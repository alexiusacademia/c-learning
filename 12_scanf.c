#include <stdio.h>

int main() {
    char name[25];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello %sWelcome to my software!\n", name);

    return 0;
}