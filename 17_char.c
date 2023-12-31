#include <stdio.h>

int main() {
    char *sample = "";

    printf("Size of sample is %lu.\n", sizeof(sample));

    sample = "Hello.";

    printf("Size of sample is %lu.\n", sizeof(sample));
    printf("Content of sample is %s.\n", sample);

    return 0;
}