#include <unistd.h> // sleep()
#include <stdio.h>
#include <stdlib.h> // rand()
#include "../../include/dealerTurn.h"
#include "../../include/init.h"
#include "../../include/hit.h"
#include "../../include/think.h"



int dealerTurn() {
    int dCard[2];
    //initial score
    int dNum = init(dCard, 1);

    while (1) {
        think(3); // thinking 3~6sec like ...... 

        if (dNum >= 17) { // num > 17 => stand
            printf("Dealer choose stand.\nTurn End\n");
            break;
        }
        dNum = hit(dNum, 1);
        //check if burst
        if(isBurst(dNum)) return -1;
    }
    
    return dNum;
}

int isBurst (int Num) {
    if (Num > 21) {
        printf("Dealer is bursted.\n");
        printf("You win!!!");
        //return -1 n win in main.c
        return 1;
    } else return 0;
}