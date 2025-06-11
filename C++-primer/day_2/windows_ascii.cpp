
#include <windows.h>
#include <iostream>

int main()
{
    for (int y = 0; y < 10; y++)
    {
        for (int x = 0; x < 20; x++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
