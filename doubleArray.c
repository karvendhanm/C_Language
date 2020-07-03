#include <stdio.h>

int main(void) {
    int nBoxCars = 0;
    int i = 0;
    scanf("%d\n", &nBoxCars);
    double weights[nBoxCars];

    for(i=0; i<nBoxCars; i++){
        scanf("%lf\n", &weights[i]);
    }

    double totalWeight = 0.0;
    for(i=0; i<nBoxCars; i++){
        totalWeight = totalWeight + weights[i];
    }

    double avgWeight = totalWeight/nBoxCars;

    for(i=0; i<nBoxCars; i++){
        printf("%.1lf\n", avgWeight - weights[i]);
    }

    return 0;
}
