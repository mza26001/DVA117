#include <stdio.h>
#define SIZE 100
#define MAX 1000

void frequency(int freq[], int numbers[], int *resFreq, int *resNumber);

int main(void)
{

    int input[SIZE] = {0};
    int freq[MAX+1] = {0};
    int userInput, resFreq, resNumber;

    printf("Please enter a number between 0 and 1000, "
                "both of these included (max 100 numbers. "
                "End with a negative number):\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("Number: ");
        scanf("%d", &userInput);

        if (userInput < 0)
        {
            break;
        }
        if (userInput > MAX)
        {
            continue;
        }
        else
        {
            input[i] = userInput;
            freq[userInput] += 1;
        }
    }

    frequency(freq, input, &resFreq, &resNumber);
    printf("The number %d occurs most times, a total of %d times ", resNumber, resFreq);

    return 0;
}

void frequency(int freq[], int numbers[], int *resFreq, int *resNumber)
{
    int mostFreq = 0;
    int freqCount = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (freq[numbers[i]] > freqCount)
        {
            mostFreq = numbers[i];
            freqCount = freq[numbers[i]];
        }
    }
    *resFreq = freqCount;
    *resNumber = mostFreq;
}
