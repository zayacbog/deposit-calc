#include <stdio.h>
#include "deposit.h"

int main(void) {
    int termation;
    float summ;
    float profit;
    float end;
    
    printf("Enter investment termation: ");
    scanf("%d", &termation);
    printf("Enter investent amount: ");
    scanf("%f", &summ);
    
    getInput(&termation, &summ);
    calcul(&termation, &summ, &profit);

    printf("Income: %.2f", profit);
    printf("\n");
    
    return 0;
}
