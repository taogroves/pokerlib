//
// Created by Tao G on 2/26/2024.
//

#ifndef PLAYER_H
#define PLAYER_H



class player {

public:

    int chips;
    int hand[2] = {0, 0};

    // constructor
    explicit player(int chips);

    // statistics
    int hands_played = 0;
    int hands_won = 0;
    int hands_lost = 0;
    int hands_tied = 0;
    int hands_folded = 0;
    int hands_raised = 0;

    // methods
    void reset();
    void print_stats();

    void deal_card(int card);
    void clear_hand();


};



#endif //PLAYER_H
