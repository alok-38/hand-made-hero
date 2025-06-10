#include <iostream>

using namespace std;

int main()
{
    int starting_value = 50;
    int ending_value = 100;
    int sum = 0;

    while (starting_value <= ending_value)
    {
        sum += starting_value;
        starting_value++; // ✅ Increment to avoid infinite loop
    }

    cout << "The sum from 50 to 100 is: " << sum << endl;
    return 0;
}
