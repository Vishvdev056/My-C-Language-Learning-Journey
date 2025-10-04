#include <stdio.h>

int main(){
    float principal, rate, time, simpleIntrest;

    // USER INPUT

    printf("Enter principal amount: ");
    scanf("%f",&principal);
    printf("Enter Rate of Intrest (in %%): ");
    scanf("%f",&rate );
    printf("Enter time (in years): ");
    scanf("%f",&time);

    // formulae

    simpleIntrest=(principal*rate*time)/100;

    // output 
printf("Simple Intrest= %.2f\n", simpleIntrest);

    return 0;
}