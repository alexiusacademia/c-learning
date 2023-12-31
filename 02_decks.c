#include <stdio.h>

int main() {
    int decks;

    printf("Enter number of decks: ");
    scanf("%d", &decks);

    printf("The number of cards is %d.\n", decks * 52);

    return 0;
}