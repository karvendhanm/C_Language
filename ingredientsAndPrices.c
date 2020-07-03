#include <stdio.h>

int ingredientsAndPrices(void){
    int nIngredients=0;
    int idx=0;
    scanf("%d\n", &nIngredients);
    double prices[nIngredients];
    double weights[nIngredients];
    double totalPrice=0;

    for(idx=0; idx<nIngredients; idx++){
        scanf("%lf", &prices[idx]);
    }

    for(idx=0; idx<nIngredients; idx++){
        scanf("%lf", &weights[idx]);
    }

    for(idx=0; idx<nIngredients; idx++){
        totalPrice = totalPrice + (prices[idx]* weights[idx]);
    }

    printf("%lf", totalPrice);

    return 0;
}
