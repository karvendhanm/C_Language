#include <stdio.h>

// Explain the null terminator.

int main(void){
    int nIndexes=0;
    int i=0;
    char firstName[101];
    char lastName[101];

    scanf("%d", &nIndexes);

    for(i=0; i<nIndexes; i++){
        scanf("%s %s", firstName, lastName);
        printf("%s %s\n", lastName, firstName);
    }

    return 0;
}
