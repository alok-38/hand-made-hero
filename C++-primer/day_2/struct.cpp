#include <iostream>
using namespace std;

struct Position
{
    int row;
    int col;
};

struct Player
{
    string name;
    Position position;
    int health;
};

int main()
{
    Position start;
    start.row = 1;
    start.col = 1;

    cout << "Start position is at: (" << start.row << ", " << start.col << ")" << endl;

    Player stats;
    stats.name = "Alok";
    stats.position = start;
    stats.health = 100;

    cout << "Player stats: " << endl;
    cout << "--------------" << endl;
    cout << "Name: " << stats.name << endl;
    cout << "Position: (" << stats.position.row << ", " << stats.position.col << ")" << endl;
    cout << "Health: " << stats.health << endl;

    return 0;
}
