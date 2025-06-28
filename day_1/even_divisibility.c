#include <stdio.h>

int main()
{
    int value_1, value_2;
    printf("Value 1\n");
    scanf("%i", &value_1);
    printf("Value 2\n");
    scanf("%i", &value_2);

    if (value_2 == 0)
    {
        printf("Error: Division by zero is not allowed\n");
        return 1; // Exit with an error code
    }

    if (value_1 % value_2 == 0)
    {
        printf("They are evenly divisible\n");
    }
    else
    {
        printf("They are not evenly divisible\n");
    }

    return 0;
}
