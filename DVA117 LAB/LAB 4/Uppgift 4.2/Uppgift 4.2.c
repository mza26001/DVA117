#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char inputString[]);
void strToLower(char inputString[], char outputArray[]);
void cleanStr(char inputString[], char outputString[]);

int main(void){

    char userInput[255];
    int game = 1;

    while(game){

        printf("Enter a sentence: ");
        fgets(userInput, sizeof(userInput), stdin);

        cleanStr(userInput,userInput);
        strToLower(userInput,userInput);

        if(isPalindrome(userInput)){
            printf("This sentence is a palindrome\n");
        }
        else{
            printf("This sentence is not a palindrome\n");
        }
        do{
            printf("Do you want to enter another sentence? 1 for 'yes', 0 for 'no': " );
            scanf("%d", &game);
            while(getchar() != '\n');
        } while(game != 1 && game != 0);
    }

    return 0;
}

int isPalindrome(char inputString[]){

    int len = strlen(inputString) - 1;
    int index = 0;

    while((len - index) - index > 0){
        if(inputString[index] != inputString[len - index]){
            return 0;
        } 
        index++;
    }
    return 1; 

}
void cleanStr(char inputString[], char outputString[]){

    int count = 0;

    for(int i = 0; i < strlen(inputString); i++){
        if(isalpha(inputString[i])){
            outputString[i - count] = inputString[i];
        }
        else if(inputString[i] == ' ' || !isalpha(inputString[i])){
            count++;
        }
    }
    outputString[strlen(inputString) - count] = '\0'; 
}

void strToLower(char inputArray[], char outputArray[]){

    for(int i = 0; i <= strlen(inputArray); i++){
        outputArray[i] = tolower(inputArray[i]);
    }
}
