#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void guesserGame();

int main(void){

    guesserGame();

    return 0;
}

void guesserGame(){

    srand(time(NULL));
    int num = rand() % 100 + 1, userGuess, count = 0;

    printf("I'm 'thinking' of a number between 1 and 100, guess which! \n");
    scanf("%d", &userGuess);

    while(true){

        if(userGuess == num){
            count++;
            printf("Congratulations, that is correct! \n");
            printf("You made %d attempts", count);
            break;
        }
        else if(userGuess < num){
            count++;
            printf("Your guess is too low, try arain!\n");
            printf("Guess: ");
            scanf("%d", &userGuess);
        }
        else{
            count++;
            printf("Your guess is too high, try again!\n");
            printf("Guess: ");
            scanf("%d", &userGuess);
        }
    }   
}