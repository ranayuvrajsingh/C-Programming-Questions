#include <stdio.h>
typedef struct {
    enum { HEARTS, DIAMONDS, CLUBS, SPADES } suit;
    enum { ACE=1, TWO, ..., KING } rank;
} Card;
int main() {
    Card my_card;
    my_card.suit = HEARTS;
    my_card.rank = ACE;
    printf("Card created: Ace of Hearts\n");
    // In a real program, you'd have arrays of strings for suits and ranks.
    if (my_card.suit == HEARTS && my_card.rank == ACE) {
        printf("This is the Ace of Hearts.\n");
    }
    return 0;
}
