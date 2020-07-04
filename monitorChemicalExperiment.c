#include <stdio.h>

int monitorChemicalExperiment(void){
    int minTempRange=0;
    int maxTempRange=0;
    int currentTemp=0;

    scanf("%d", &minTempRange);
    scanf("%d", &maxTempRange);
    scanf("%d", &currentTemp);

    while(currentTemp != -999){
        if((currentTemp >= minTempRange) && (currentTemp <= maxTempRange)){
            printf("Nothing to report\n");
        }else{
            printf("Alert");
            break;
        }
        scanf("%d", &currentTemp);
    }

    return 0;
}

