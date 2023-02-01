#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dealCard() {
    srand((unsigned int)time(NULL));
    return printf("%d", rand() % 13 + 1);
}

int main() {
    dealCard();
}