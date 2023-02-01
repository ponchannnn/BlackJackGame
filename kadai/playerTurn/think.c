#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "think.h"

void think(int n) {
    // n ~ n + 3 sec sleep n print '.' each sec
    int sleepTime = rand() % 3 + n;
    for (int i = 0; i < sleepTime; i++) {
        printf(".");
        sleep(1);
    }
    printf("\n");
}