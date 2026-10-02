#include <stdio.h>

int main(void){

    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("%d + %d = %d", a, b, a+b);

    return 0;
}