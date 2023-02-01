#include "adjustCard.h"
#include "showCard.h"
#include "dealCard.h"
#include "think.h"


int init(int Card[], int whichTurn) {//whichTurn => you = 0, Dealer = 1
    printf("Flipping two cards..\n");

    //two cards
    for (int i = 0; i < 2; i++) Card[i] = dealCard();

    //thinking 2~5sec like .....
    think(2);

    //show
    showInitCard(Card, whichTurn);

    //sum both cards
    int Num = adjustCard(Card[1], adjustCard(Card[0], 0));

    //show sum score
    showScore(Num, whichTurn);
    return Num;
}

