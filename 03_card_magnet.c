/*
* Program to evaluate face values.
* Released under the Vegas Public License. * (c)2014 The College Blackjack Team.
* This exercise tries to find out if the learner can rearrange the codes in correct order.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char card_name[3];
    puts("Enter the card name.");
    scanf("%2s", card_name);

    int val = 0;
    if (card_name[0] == 'K') {
        val = 10;
    } else if (card_name[0] == 'Q') {
        val = 10;
    } else if (card_name[0] == 'J') {
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name);
    }

    printf("The card value is %i.\n", val);
    printf("%s\n", &card_name[0]);
    printf("%s\n", &card_name[1]);
    printf("%s\n", &card_name[2]);

    return 0;
}