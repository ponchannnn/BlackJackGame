#include <stdio.h>
#include <stdlib.h>
#include "../../include/dealCard.h"
#include "../../include/showCard.h"
#include "../../include/adjustCard.h"
#include "../../include/think.h"

int hit (int Num, int whichTurn) {
    printf("%s chose 'hit'.\n", whichTurn == 0? "You" : "Dealer");
    int newNum = dealCard();
    think(2); // thinking 2~5sec like ...... 
    showCard(newNum, whichTurn);
    //calc
    newNum = adjustCard(newNum, Num);

    showScore(newNum, whichTurn);
    return newNum;
}