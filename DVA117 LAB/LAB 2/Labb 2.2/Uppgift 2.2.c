#include <stdio.h>

int main(void){

    int num;
    printf("Enter a number between 0 and 5: ");
    scanf("%d", &num);

    switch(num){
        case 0: 
            printf("Morse code: -----");
            break;

        case 1:
            printf("Morse code: .----");
            break;

        case 2:
            printf("Morse code: ..---");
            break;

        case 3:
            printf("Morse code: ...--");
            break;

        case 4:
            printf("Morse code: ....-");
            break;

        case 5:
            printf("Morse code: .....");
            break;

        default:
            printf("Invalid input");
            break;
    }

    return 0;

}