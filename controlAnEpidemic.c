#include <stdio.h>

int epidemicPropagation(void){
    int totalPopulation=0;
    scanf("%d", &totalPopulation);
    int nDays=1;
    int nInfected=1;

    while(nInfected<totalPopulation){
        nDays++;
        nInfected=(2*nInfected)+nInfected;
    }

    printf("%d", nDays);
    return 0;
}
