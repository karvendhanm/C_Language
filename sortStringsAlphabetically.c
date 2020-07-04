#include <stdio.h>

//find T

int findT(void){
    char word[51];
    int len=0;
    int middleLetterPos=0;
    int idx=0;

    scanf("%s", word);
    while(word[len] != '\0'){
        len++;
    }

    if(len%2){
        middleLetterPos = ((len/2) + 1);
    } else {
        middleLetterPos = (len/2);
    }

    while((word[idx] != 't') && (word[idx] != 'T') && (idx < len)){
        idx++;
    }

    if(((word[idx] == 't') || (word[idx] == 'T')) && (idx < len) && (idx < middleLetterPos)){
        printf("%d\n",1);
    } else if(((word[idx] == 't') || (word[idx] == 'T')) && (idx < len) && (idx >= middleLetterPos)){
        printf("%d\n",2);
    } else {
        printf("%d\n",-1);
    }

    return 0;
}
