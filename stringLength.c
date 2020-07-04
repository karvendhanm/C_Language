#include <stdio.h>

int main(void){
    int idx=0;
    char name[50];
    scanf("%s", name);

    while(name[idx] != '\0'){
        idx++;
    }

    if(idx%2){
        printf("%d", 2);
    } else {
        printf("%d", 1);
    }

    return 0;
}
