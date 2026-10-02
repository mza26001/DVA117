#include <stdio.h>  

int main(void){
    
    int angle;
    printf("Enter a positive angle in full degrees: ");
    scanf("%d", &angle);

    while (angle > 180 || angle <= 0){
        printf("Incorrect input, try agai:");
        scanf("%d", &angle);

    }

    if(angle < 90){
        printf("The angle is acute (spetsig)!");
    }
    else if(angle > 90){
            printf("The angle is blunt (trubbig)!");

    }
    else if(angle == 90){
        printf("The angle is right (rätt)!");
    }

    return 0;

}