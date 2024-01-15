#include <stdio.h>
#include <string.h>

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {

        for (int j = i; j < size; j++)
        {
            if (array[j] > array[i])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {9, 1, 2, 5, 1, 8, 0};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}