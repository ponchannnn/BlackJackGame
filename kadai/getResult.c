#include <stdio.h>
#include <stdlib.h> //exit()

int getResult () {
    int pScore;
    int dScore;
    scanf("%d", &pScore);
    scanf("%d", &dScore);


    if (pScore > dScore) {
        printf("Player Win!");
        exit(1);
    }
    if (pScore == dScore) {
        printf("Draw!");
        exit(1);
    }
    if (pScore < dScore) {
        printf("Player Loose・・・");
        exit(1);
    }
}
int main() {
    getResult();
}