#include <iostream>
using namespace std;

struct Vector
{
    float x, y, z;
};

int main()
{
    Vector position = {1.0f, 2.0f, 3.0f};

    cout << "Position Vector:" << endl;
    cout << "x = " << position.x << endl;
    cout << "y = " << position.y << endl;
    cout << "z = " << position.z << endl;

    return 0;
}
