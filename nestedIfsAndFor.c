#include <stdio.h>
// How many big cities

int main(void){
    int nCities=0;
    int idx=0;
    int bigCities=0;
    scanf("%d\n",&nCities);
    int population[nCities];

    for(idx=0; idx<nCities; idx++){
        scanf("%d\n",&population[idx]);
        if(population[idx]>10000){
            bigCities++;
        }
    }
    printf("%d", bigCities);
    return 0;
}

