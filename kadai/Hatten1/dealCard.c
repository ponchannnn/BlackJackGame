#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

int dealCard () {
    //srand((unsigned int)time(NULL));
    return rand() % 13 + 1;
}