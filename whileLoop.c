#include <stdio.h>
//compute budget using a while loop.

int main(void){
    int expense = 0;
    int totalExpense=0;
    scanf("%d", &expense);
    while(expense!=-1){
        totalExpense = totalExpense + expense;
        scanf("%d", &expense);
    }
    printf("%d", totalExpense);
    return 0;
}
