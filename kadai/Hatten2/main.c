#include <stdio.h>
#include <time.h>
#include <stdlib.h> //srand()
#include <string.h> // strcmp()
#include <unistd.h> // sleep()

#include "playerTurn.h"
#include "dealerTurn.h"

int playGame ();
int getResult (int, int);
int start();


int main () {
    printf("Let's start BlackJackGame!!\n");
    srand((unsigned int)time(NULL));
    
    return start();
    //playGame();
    
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
}}

int start() {
    int tip;
    tip = 10;

    while (1) {
        if (tip > 0) {
            printf("Your tips are now %d\n", tip);
            char pAgain[255] = {'a'};
            while (!(strcmp(pAgain, "play") == 0) && !(strcmp(pAgain, "stop") == 0)) {
                printf("You can play.\nIf you want, please type 'play'. don't play again, type 'stop'.\n");
                scanf("%s", pAgain);
            }
            
            if (strcmp(pAgain, "play") == 0) {
                int bet;//bet
                printf("How much do you bed?\n");
                scanf("%d", &bet);

                while (bet > tip) {// if bet > tip
                    printf("The bet number must be lease than tip you have.\n");
                    scanf("%d", &bet);
                }

                switch (playGame())
                {
                case 1:// win
                    tip += bet;
                    break;

                case 0:// draw
                    break;

                case -1:// loose
                    tip -= bet;
                    break;

                default:
                    break;
                }
                
            } else {
                printf("You choose 'stop'\nYour finally tips are %d!!", tip);
                return 1;
            }
        } else {
            printf("Your tip is 0..\nYou Loose...\n");
            return -1;
        }
    }
}
