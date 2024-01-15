#include <stdio.h>
#include <ctype.h>

int main()
{

    char operator;
    double num1;
    double num2;
    double result;

    printf("Which type of operation would you like to use (+ - * /)?");
    scanf("%c", &operator);
    printf("Enter number 1 :");
    scanf("%lf", &num1);
    printf("Enter number 2 :");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;

    default:
        printf("Use one of the valid operators (+ - * /)");
        break;
    }
    printf("result of %.2lf %c %.2lf is %.2lf", num1, operator, num2, result);
    return 0;
}
