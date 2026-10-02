
#include <stdio.h>
#include <math.h>

float squareRoot(float* number);

int main(void) {

    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    float* numberPtr = &number;

    if (squareRoot(numberPtr)) {
        printf("The square root is %f", *numberPtr);
    }
    else {
        printf("It is not possible to calculate the square root of a negative number");
    }

    return 0;
}

float squareRoot(float* number) {

    if (*number < 0) {
        return 0; /// 0 får räcknas som ett positivt tal
    }
    else {
         *number = sqrt(*number);
         return 1;
    }
}
