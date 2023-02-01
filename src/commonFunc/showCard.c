#include "../../include/showCard.h"

char Card(int pCard) {
    if (pCard == 1) return 'A';
    if (pCard > 1 && pCard < 10) return '0' + pCard;
    if (pCard == 11) return 'J';
    if (pCard == 12) return 'Q';
    if (pCard == 13) return 'K';
}


int showInitCard(int card[], int whichTurn) {
    printf("%s card numbers are %c n %c.\n", whichTurn == 0? "Your" : "Dealers", Card(card[0]), Card(card[1]));
}

int showCard(int card, int whichTurn) {
    printf("%s card number is %c.\n", whichTurn == 0? "Your" : "Dealers", Card(card));
}