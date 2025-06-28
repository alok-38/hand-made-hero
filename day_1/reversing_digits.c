#include <stdio.h>
#include <stdlib.h> // for abs()

int main()
{
    int reversed_number = 0;
    int original_number, last_digit;
    int sign = 1;

    printf("The number you want to reverse (Positive or Negative): ");
    scanf("%i", &original_number);

    if (original_number < 0)
    {
        sign = -1;
        original_number = abs(original_number);
    }

    while (original_number > 0)
    {
        last_digit = original_number % 10;
        reversed_number = reversed_number * 10 + last_digit;
        original_number = original_number / 10;
    }

    reversed_number *= sign;

    printf("Reversed number: %i\n", reversed_number);

    return 0;
}
