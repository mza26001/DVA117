#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int check = 1;

    printf("Welcome!\n");
    printf("Enter a negative number to exit input and print the results!\n");

    do
    {
        int num, sum = 0, count = 0, largest = 0, smallest = 0;
        printf("Give number: ");
        scanf("%d", &num);
        if (num < 0)
        {   
            printf("A negative number was entered!\n");
            printf("Would you like to run the program again? 1 for 'yes', 0 for 'no':");
            scanf("%d", &check);
            if (check == 0)
            {
            printf("Exiting program, by by!"); 
            }
            continue;;
        }
        largest = num;
        smallest = num;

        while (num >= 0)
        {
            count++;
            sum += num;

            if (num > largest)
            {
                largest = num;
            }
            if (num < smallest)
            {
                smallest = num;
            }
            printf("Give number: ");
            scanf("%d", &num);
        }

        float average = (float)sum / count;
        printf("The smallest number is: %d\n", smallest);
        printf("The largest number is: %d\n", largest);
        printf("The sum of the numbers is %d\n", sum);
        printf("The average value is: %f\n", average);

        do{
            printf("Would you like to run the program again? 1 for 'yes', 0 for 'no':");
            scanf("%d", &check);
            if (check == 0)
            {
                printf("End "); 
            }
        }while(check != 1 && check != 0);  

    }
    while (check == 1);

    return 0;
}