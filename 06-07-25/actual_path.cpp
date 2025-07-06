#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool find_path(const vector<vector<char>> &maze, int x, int y,
               set<pair<int, int>> &visited, vector<pair<int, int>> &path);

int main()
{
    // You can fill this in later
    return 0;
}

bool find_path(const vector<vector<char>> &maze, int x, int y,
               set<pair<int, int>> &visited, vector<pair<int, int>> &path)
{
    int rows = maze.size();
    int cols = maze[0].size();

    // Base cases
    if (x < 0 || y < 0 || x >= rows || y >= cols)
        return false;
    if (maze[x][y] == '#' || visited.count({x, y}) > 0)
        return false;
    if (maze[x][y] == 'G')
    {
        path.push_back({x, y});
        return true;
    }

    visited.insert({x, y});
    path.push_back({x, y});

    // Recursive exploration: down, up, right, left
    if (find_path(maze, x + 1, y, visited, path) ||
        find_path(maze, x - 1, y, visited, path) ||
        find_path(maze, x, y + 1, visited, path) ||
        find_path(maze, x, y - 1, visited, path))
    {
        return true;
    }

    // Backtrack
    path.pop_back();
    return false;
}
