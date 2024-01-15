#include <stdio.h>
#include <string.h>

enum Day
{
    Mon = 1,
    Tue = 2,
    Wed = 3,
    Thu = 4,
    Fri = 5,
    Sat = 6,
    Sun = 7
};

int main()
{
    // enum user defiend type of named integer identifiers
    enum Day today = Sun;
    printf("today is %d", today);
    return 0;
}