#include <stdio.h>
#include <string.h>

int main()
{
    char x[20] = "water";
    char y[20] = "soda";
    char tmp[20];
    strcpy(tmp, x);
    strcpy(x, y);
    strcpy(y, tmp);

    printf("%s\n", x);
    printf("%s\n", y);
}
