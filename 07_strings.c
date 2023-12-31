#include <stdio.h>

int main() {
    char name[] = "Alex";

    for (int i = 0; i < sizeof(name) / sizeof(char); i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}