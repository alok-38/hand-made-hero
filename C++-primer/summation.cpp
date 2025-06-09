#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int sum = n * (n + 1) / 2;

    std::cout << "Sum from 1 to " << n << " inclusive = " << sum << std::endl;

    return 0;
}
