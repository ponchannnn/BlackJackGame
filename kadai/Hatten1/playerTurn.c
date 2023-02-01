#include "playerTurn.h"
#include "init.h"
#include "ifHit.h"
#include <stdlib.h> //exit()
#include <stdio.h>
#include "hit.h"

int ispBurst(int);

int playerTurn() {
    int pCard[2];
    //initial score
    int pNum = init(pCard, 0);

    while (1) {
        if (ifHit(pNum)) break;//stand
        pNum = hit(pNum, 0);
        //check if burst
        if(ispBurst(pNum)) return -1;
    }
    
    return pNum;
}

int ispBurst (int Num) {
    if (Num > 21) {
        printf("You are bursted.\n");
        printf("You loose...");
        //return 1 n loose in main.c
        return 1;
    } else return 0;
}