#include <iostream>
#include <cmath>

struct Vec3
{
    float x, y, z;

    // Constructor
    Vec3(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    // Print function
    void print() const
    {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }

    // Vector addition
    Vec3 operator+(const Vec3 &other) const
    {
        return Vec3(x + other.x, y + other.y, z + other.z);
    }

    // Scalar multiplication
    Vec3 operator*(float scalar) const
    {
        return Vec3(x * scalar, y * scalar, z * scalar);
    }

    // Dot product
    float dot(const Vec3 &other) const
    {
        return x * other.x + y * other.y + z * other.z;
    }

    // Length (magnitude)
    float length() const
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    // Normalized vector
    Vec3 normalize() const
    {
        float len = length();
        return (len > 0) ? (*this) * (1.0f / len) : Vec3(0, 0, 0);
    }
};

int main()
{
    Vec3 a(1.0f, 2.0f, 3.0f);
    Vec3 b(4.0f, 5.0f, 6.0f);

    Vec3 c = a + b;
    c.print(); // Output: (5, 7, 9)

    std::cout << "Dot product: " << a.dot(b) << std::endl;
    std::cout << "Length of a: " << a.length() << std::endl;

    Vec3 normalized = a.normalize();
    normalized.print(); // Output: normalized vector of a

    return 0;
}
