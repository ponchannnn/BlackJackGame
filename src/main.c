#include <stdio.h>
#include <time.h>
#include <unistd.h> //sleep()
#include <stdlib.h> //srand()

#include "../include/playerTurn.h"
#include "../include/dealerTurn.h"

int playGame ();
int getResult (int, int);


int main () {
    printf("Let's start BlackJackGame!!\n");
    srand((unsigned int)time(NULL));
    return playGame();
}

int playGame () {
    int pScore = playerTurn();
    if (pScore == -1) return -1; // player burst then return -1

    sleep(3);
    
    int dScore = dealerTurn();
    if (dScore == -1) return 1; // dealer burst then return 1

    int result = getResult(pScore, dScore);
    return result;
}

int getResult (int pScore, int dScore) {
    if (pScore > dScore) {//player win
        printf("You Win!!!\n");
        return 1;
    }

    else if (pScore == dScore) {//Draw
        printf("Draw!\n");
        return 0;
    }

    else if (pScore < dScore) {//loose
        printf("You Loose...\n");
        return -1;
}
}