//
// Created by Tao G on 2/26/2024.
//

#include "player.h"


player::player(const int chips) {
    this->chips = chips;
}

void player::reset() {
    this->hands_played = 0;
    this->hands_won = 0;
    this->hands_lost = 0;
    this->hands_tied = 0;
    this->hands_folded = 0;
    this->hands_raised = 0;
}

void player::deal_card(int card) {
    if (this->hand[0] == 0) {
        this->hand[0] = card;
    } else {
        this->hand[1] = card;
    }
}

void player::clear_hand() {
    this->hand[0] = 0;
    this->hand[1] = 0;
}
