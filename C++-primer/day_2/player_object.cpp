#include <iostream>
#include <string>

struct Player
{
    std::string name;
    int health;
    int level;
    float positionX;
    float positionY;
    float positionZ;
};

int main()
{
    Player me = {"Alice", 100, 1, 0.0f, 0.0f, 0.0f};

    std::cout << "Player: " << me.name << "\n"
              << "Health: " << me.health << "\n"
              << "Level: " << me.level << "\n"
              << "Position: (" << me.positionX << ", " << me.positionY << ", " << me.positionZ << ")\n";

    return 0;
}
