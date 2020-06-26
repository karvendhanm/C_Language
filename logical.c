// logical operators AND(&&), OR(||) and NOR(!) are called logical operators.

#include <stdio.h>

int logical_operator(void){

    int age=0, luggage=0, cost=0, is_heavyLuggage=0;

    scanf("%d%d", &age, &luggage);

    if(luggage > 20){
            is_heavyLuggage = 1;
    }

    cost = 30 + (10 * is_heavyLuggage);

    if((age==60) || (age<10)){

        if(age == 60){
            cost = 0;
        } else {
            cost = 5;
        }
    }

    printf("%d", cost);

    return 0;
}

