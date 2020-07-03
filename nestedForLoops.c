#include <stdio.h>
//Square of stars
int main(void){
    int nStars = 0;
    int row=0;
    int column=0;
    scanf("%d", &nStars);

    for(row=0; row<nStars; row++){
        for(column=0; column<nStars; column++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
