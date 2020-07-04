// Signing the petition
#include <stdio.h>

int signingThePetition(void){
    int propagators=3;
    int nDays=0;
    int nonPropagators=0;
    int newSignatures=0;
    int totalSignatures=0;

    while(totalSignatures<1000){
        nDays++;
        newSignatures=2*propagators;
        totalSignatures=newSignatures+propagators+nonPropagators;
        printf("Day %d: %d new signatures! Total: %d\n",nDays, newSignatures, totalSignatures);
        nonPropagators=propagators+nonPropagators;
        propagators = newSignatures;
    }

    printf("number of days to reach 1000 signatures: %d", nDays);
    return 0;
}

