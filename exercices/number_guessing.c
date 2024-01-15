#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // the seed is needed for generating new random variables every time

    int correct_number = (rand() % 100) + 1; //
    int guessed_number;
    int num_guesses = 0;
    do
    {
        num_guesses++;
        printf("Please input your guess :");
        scanf("%d", &guessed_number);

        if (guessed_number > correct_number)
        {
            printf("Oups, Too high, try again\n\n");
        }
        else
        {
            printf("Try again, Too low\n\n");
        }
    } while (guessed_number != correct_number);

    printf("Ding, Ding, Ding!! correct number %d\n", guessed_number);
    printf("you guessed it in %d guesses\n", num_guesses);

    if (num_guesses < 10)
    {
        printf("you are Khaoula");
    }
    else
    {
        printf("Is this mouad ?");
    }

    return 0;
}