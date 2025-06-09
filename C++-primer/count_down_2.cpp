#include <iostream>

int main()
{
    std::cout << "Where would you like to start from? ";
    int starting_value = 0;
    std::cin >> starting_value;

    for (int index = starting_value; index > 0; index--) {
        std::cout << index << std::endl;
    }

    std::cout << "Liftoff!" << std::endl;

    return 0;
}
