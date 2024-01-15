#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[25];
    char PASSWORD[15];
    int id;

} User;

int main()
{

    User user1 = {"Mouad", "pwd123", 25};
    printf("%s\n", user1.name);
    printf("%s\n", user1.PASSWORD);
    printf("%d\n", user1.id);
    return 0;
}