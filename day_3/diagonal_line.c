#include <stdio.h>

int main()
{
    int length = 10;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("\\\n");
    }
    return 0;
}
