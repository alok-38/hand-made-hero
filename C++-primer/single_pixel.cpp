#include <iostream>

struct Pixel
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;

    // Default constructor: initializes to black (0,0,0)
    Pixel() : red(0), green(0), blue(0) {}

    // Parameterized constructor
    Pixel(unsigned char r, unsigned char g, unsigned char b)
        : red(r), green(g), blue(b) {}
};

int main()
{
    // Create a black pixel (default constructor)
    Pixel blackPixel;
    std::cout << "Black Pixel: R=" << (int)blackPixel.red
              << ", G=" << (int)blackPixel.green
              << ", B=" << (int)blackPixel.blue << std::endl;

    // Create a red pixel
    Pixel redPixel(255, 0, 0);
    std::cout << "Red Pixel: R=" << (int)redPixel.red
              << ", G=" << (int)redPixel.green
              << ", B=" << (int)redPixel.blue << std::endl;

    // Create a custom color pixel
    Pixel purplePixel(128, 0, 128);
    std::cout << "Purple Pixel: R=" << (int)purplePixel.red
              << ", G=" << (int)purplePixel.green
              << ", B=" << (int)purplePixel.blue << std::endl;

    return 0;
}
