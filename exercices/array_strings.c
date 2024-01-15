#include <stdio.h>
#include <string.h>
int main()
{
    char cars[][10] = {"mouad", "Khaoula", "Manal"};

    strcpy(cars[0], "ettali");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("name is %s\n", cars[i]);
    }
    return 0;
}