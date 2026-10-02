
#include <stdio.h>

char* fromThird(char str[]);

int main(void) {

    char input[100];
    printf("Enter a sentence: ");
    fgets(input, 100, stdin);
    printf("%s", fromThird(input));

    return 0;
}

char* fromThird(char str[]) {

    int count = 0;
    while (*str != 0) {

        if (*str == ' ') {
            count++;
        }
        ++str;
        if (count >= 2) {
            return str;
        }
        
    }
    return "The sentence is too short";

}

