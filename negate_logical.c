// logical operators AND(&&), OR(||) and NOR(!) are called logical operators.
// Negative logic to name tree.

#include <stdio.h>

int negate_logical_operators(void) {

    int height=0, leaflets=0;

    scanf("%d", &height);
    scanf("%d", &leaflets);

    int Tinuviel = (height <= 5) && (leaflets >= 8);
    int Calaelen = (height >= 10) && (leaflets >= 10);
    int Falarion = (height <= 8) && (leaflets <= 5);
    int Dorthonion = (height >= 12) && (leaflets <= 7);

    if(Tinuviel) {
        printf("Tinuviel");
    }
    else if(Calaelen) {
        printf("Calaelen");
    }
    else if(Falarion) {
        printf("Falarion");
    }
    else if(Dorthonion) {
        printf("Dorthonion");
    }
    else {
        printf("Uncertain");
    }

    return 0;
}
