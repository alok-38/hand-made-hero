#include <iostream>
#include <vector>
#include <stack>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

const int WIDTH = 20;
const int HEIGHT = 10;

// Directions for movement (up, right, down, left)
const int DX[4] = {0, 1, 0, -1};
const int DY[4] = {-1, 0, 1, 0};

struct Cell
{
    int x, y;
    bool visited;
    bool walls[4]; // up, right, down, left
    Cell(int x_, int y_) : x(x_), y(y_), visited(false)
    {
        for (int i = 0; i < 4; i++)
            walls[i] = true;
    }
};

// Check if cell is inside the grid
bool inBounds(int x, int y)
{
    return x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT;
}
