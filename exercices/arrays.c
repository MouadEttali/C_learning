#include <stdio.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};

    int numbers[][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    float x = 555555555555.0;
    printf("size of an int %.2lf\n", sizeof(x));
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int cols = sizeof(numbers[0]) / sizeof(numbers[0][0]);
    printf("size of numbers %d\n", sizeof(numbers));

    numbers[0][0] = 10;

    printf("rows of numbers %d\n", rows);
    printf("cols of numbers %d\n", cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}