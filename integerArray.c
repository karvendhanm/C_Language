#include <stdio.h>

int main(void) {
    int recipe[10];
    int i=0;
    int idx = 0;

    for(i=0; i<10; i++){
        scanf("%d", &recipe[i]);
    }

    scanf("%d", &idx);

    printf("%d", recipe[idx]);

    return 0;
}
