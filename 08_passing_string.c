#include <stdio.h>

void fortune_cookie(char msg[]) {
    printf("Message reads: %s.\n", msg);
    printf("msg occupies %lu bytes.\n", sizeof(msg));
}

int main() {
    fortune_cookie("Hello, World!");

    return 0;
}