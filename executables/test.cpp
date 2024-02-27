#include <iostream>

#include "../defs.h"

int main(int argc, char *argv[]) {
    int deck[52];
    int hand[5];
    int i, j, rank, suit;
    unsigned short value;

    srand48();

    // print three random numbers
    for (i = 0; i < 3; i++) {
        std::cout << drand48() << std::endl;
    }

    init_deck(deck);
    shuffle_deck(deck);
    for (i = 0; i < 5; i++) {
        hand[i] = deck[i];
    }
    print_hand(hand, 5);
    value = eval_5hand(hand);
    printf("Hand Value: %s\n", value_str[hand_rank(value)]);
    return 0;
}
