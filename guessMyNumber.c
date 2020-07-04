#include <stdio.h>

int childsGuess(void){
    int targetNumber=0;
    int childsGuess=0;
    int nTries = 1;

    scanf("%d\n", &targetNumber);
    scanf("%d", &childsGuess);

    while(childsGuess != targetNumber){
        nTries++;
        if(childsGuess > targetNumber){
            printf("it is less\n");
        }else{
            printf("it is more\n");
        }
        scanf("%d", &childsGuess);
    }

    printf("Number of tries needed:\n%d", nTries);

    return 0;
}
