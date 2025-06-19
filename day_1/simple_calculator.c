#include <stdio.h>
#include <ctype.h>

int main()
{
    float value, accumulator = 0;
    char operator;

    printf("Begin Calculations\n");

    while (1)
    {
        scanf("%f %c", &value, &operator); // Read number and operator
        operator = tolower(operator);      // Case-insensitive

        if (operator == 'e' && value == 0)
        {
            printf("End of Calculations\n");
            break;
        }

        switch (operator)
        {
        case '+':
            accumulator += value;
            break;
        case '-':
            accumulator -= value;
            break;
        case '*':
            accumulator *= value;
            break;
        case '/':
            if (value == 0)
            {
                printf("Error! Division by zero\n");
                continue;
            }
            accumulator /= value;
            break;
        case 's': // Set/reset
            accumulator = value;
            break;
        default:
            printf("Invalid operator\n");
            continue;
        }

        printf("= %.2f\n", accumulator);
    }

    return 0;
}
