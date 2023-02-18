#include <stdio.h>
/**
 * main - Entry point
 * Program  prints if number is positive or negative
 * Return: Always 0 (Success)
*/
int main()
{
    int number = -345566433;
    if (number > 0)
    {
        printf("%d is positive",number);
    }else if (number < 0)
    {
        printf("%d is negative", number);
    }else
    {
        printf("%d is zero", number);
    }

    return 0;
}
