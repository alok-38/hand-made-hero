#include <iostream>

// Structure to represent a 2D vector
struct Vector2
{
    float x;
    float y;
};

// Object class with kinematics
class KinematicObject
{
public:
    Vector2 position;
    Vector2 velocity;
    Vector2 acceleration;

    void update(float deltaTime)
    {
        // Update velocity based on acceleration
        velocity.x += acceleration.x * deltaTime;
        velocity.y += acceleration.y * deltaTime;

        // Update position based on velocity
        position.x += velocity.x * deltaTime;
        position.y += velocity.y * deltaTime;
    }

    void printStatus()
    {
        std::cout << "Position: (" << position.x << ", " << position.y << ")\n";
    }
};

int main()
{
    KinematicObject obj;

    // Initial values
    obj.position = {0.0f, 0.0f};      // Starting at origin
    obj.velocity = {5.0f, 10.0f};     // Initial velocity (moving right and up)
    obj.acceleration = {0.0f, -9.8f}; // Gravity pulling down

    const float deltaTime = 0.016f; // Simulate ~60 FPS

    // Simulate for 2 seconds
    for (int i = 0; i < 125; ++i)
    {
        obj.update(deltaTime);
        obj.printStatus();
    }

    return 0;
}
