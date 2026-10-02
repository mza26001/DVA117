#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void generateNumbers(int array[]);
void printElements(int array[], int size);
int countElement(int inputArray[], int elementToCount);

int main(void){

    srand(time(NULL));
    int numbers[SIZE];
    int userInput;

    generateNumbers(numbers);
    printElements(numbers, SIZE);
    printf("What to search for: ");
    scanf("%d", &userInput);
    printf("The number %d occurs %d times. ", userInput, countElement(numbers, userInput));

    return 0;
}

void generateNumbers(int array[]){

    for(int i = 0; i < SIZE; i++){
        array[i] = rand() % 10 + 1; 
    }
}

void printElements(int array[], int size){

    for(int i = 0; i < size; i++){
        printf("Number: %d\n", array[i]);
    }
}

int countElement(int inputArray[], int elementToCount){

    int count = 0;
    for(int i = 0; i < SIZE; i++){
        if(inputArray[i] == elementToCount){
            count++;
        }
    }
    return count;
}