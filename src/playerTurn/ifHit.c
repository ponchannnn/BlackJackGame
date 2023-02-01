#include <stdio.h>
#include <string.h>
#include "../../include/ifHit.h"

//if hit => 0, stand => 1;
int ifHit (int pNum) {
    // str
    char str[255] = {'a'};
    while (!(strcmp(str, "0") == 0) && !(strcmp(str, "hit") == 0) && !(strcmp(str, "1") == 0) && !(strcmp(str, "stand") == 0)) {
        printf("If you wanna  hit, type '0' or 'hit',\nif you wanna stand, type '1' or 'stand'.\n");
        scanf("%s", str);
    }

    if (strcmp(str, "0") == 0 || strcmp(str, "hit") == 0) return 0;
    else if (strcmp(str, "1") == 0 || strcmp(str, "stand") == 0) {
        printf("You chose stand.\nTurn End!\n");
        return 1;
        }
}