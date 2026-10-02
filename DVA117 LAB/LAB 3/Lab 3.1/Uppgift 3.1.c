#include <stdio.h>

float convert(float sek, float rate);

int main(void){

    float sek, rate;

    printf("Enter SEK: \n");
    scanf("%f", &sek);
    printf("Enter exchange rate: \n");
    scanf("%f", &rate);
    printf("This converts to %.2f ", convert(sek,rate));

    return 0;
}

float convert(float sek, float rate){
    return sek * rate;
}