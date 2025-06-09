#include <iostream>

int main()
{
    int value_1 = 0, value_2 = 0;

    std::cout << "Enter two values: ";
    std::cin >> value_1 >> value_2;

    if (value_1 <= value_2)
    {
        for (int i = value_1; i <= value_2; i++)
        {
            std::cout << i << " ";
        }
    }
    else
    {
        for (int i = value_1; i >= value_2; i--)
        {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}
