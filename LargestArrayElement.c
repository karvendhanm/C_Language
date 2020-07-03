#include <stdio.h>

int LargestArrayElement(void){
    //finding the largest array element
    int nElements = 0;
    int idx = 0;
    int number, maxNumber;

    printf("Enter the number of elements:\n");
    scanf("%d", &nElements);
    int array[nElements];

    for(idx = 0; idx<nElements; idx++){
        printf("Enter the %d element of the array\n", idx+1);
        scanf("%d", &array[idx]);

        number = array[idx];
        if(idx==0){
            maxNumber = number;
        }
        if(number>maxNumber){
            maxNumber = number;
        }
    }


    printf("the largest number is %d\n", maxNumber);

    return 0;
}
