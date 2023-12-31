#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("%s\n", argv[0]);
    
    if (argv[1] == NULL) {
        printf("No argument given.\n");
    }

    printf("Arguments = %i.\n", argc);

    return 0;
}