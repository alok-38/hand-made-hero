#include <iostream>
#include <conio.h> // For _getch() on Windows
using namespace std;

const int ROWS = 9;
const int COLS = 17;

char maze[ROWS][COLS + 1] = {
    "*****************",
    "*S....*.........*",
    "*.****.*.*****.*",
    "*....*.*.*...*.*",
    "****.*.*.*.*.*.*",
    "*....*...*.*...*",
    "*.*********.****",
    "*.............F*",
    "*****************"};

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

// Function to draw the maze with player position
void drawMaze(Player player)
{
    system("cls"); // Clear the screen
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            if (i == player.position.row && j == player.position.col)
                cout << 'P'; // Player character
            else
                cout << maze[i][j];
        }
        cout << endl;
    }
}

bool isWall(int row, int col)
{
    return maze[row][col] == '*';
}

bool isFinish(int row, int col)
{
    return maze[row][col] == 'F';
}

int main()
{
    Player player = {"Alok", {1, 1}, 100};

    while (true)
    {
        drawMaze(player);

        cout << "Move (W/A/S/D): ";
        char move = _getch(); // Instant key press without Enter

        int newRow = player.position.row;
        int newCol = player.position.col;

        switch (tolower(move))
        {
        case 'w':
            newRow--;
            break;
        case 's':
            newRow++;
            break;
        case 'a':
            newCol--;
            break;
        case 'd':
            newCol++;
            break;
        default:
            continue;
        }

        if (!isWall(newRow, newCol))
        {
            player.position.row = newRow;
            player.position.col = newCol;
        }

        if (isFinish(player.position.row, player.position.col))
        {
            drawMaze(player);
            cout << "\n🎉 You reached the finish, " << player.name << "! Congratulations!\n";
            break;
        }
    }

    return 0;
}
