#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // the seed is needed for generating new random variables every time

    int number1 = (rand() % 6) + 1; // rand gives 0 -- 32767
    int number2 = (rand() % 6) + 1; // rand gives 0 -- 32767
    int number3 = (rand() % 6) + 1; // rand gives 0 -- 32767

    printf("%d\n", number1);
    printf("%d\n", number3);
    printf("%d\n", number2);

    return 0;
}