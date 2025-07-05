#include <iostream>

void damagePlayer(int *health, int amount)
{
    if (health != nullptr)
    {
        *health -= amount;
    }
}

int main()
{
    int playerHealth = 100;
    damagePlayer(&playerHealth, 30);

    std::cout << "Player health: " << playerHealth << std::endl; // Output?
    return 0;
}
