#include <stdio.h>
#include "adjustCard.h"
//adjust card num
int adjustCard(int Card, int Num) {
    if (Card > 10) Card = 10;
    Num += Card;
    if (Card == 1 && Num <= 11) Num += 10;
    return Num;
}

int adjustInitCard(int Card1, int Card2) {
    if (Card1 > 10) Card1 = 10;
    if (Card2 > 10) Card2 = 10;

    int Num = Card1 + Card2;
    if (Card1 == 1 && Num <= 11) Num += 9;
    if (Card2 == 1 && Num <= 11) Num += 9;
    return Num;
}

void showScore(int Num, int whichTurn) {
    printf("%s Score is now %d!.\n", whichTurn == 0? "Your" : "Dealers", Num);
}