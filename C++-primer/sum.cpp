#include <iostream>

using namespace std;

int main()
{
    int sum = 0, value = 1;

    while (value <= 10)
    {
        sum += value;
        value++;
    }

    cout << "Sum from 1 to 10 inclusive = " << sum << endl;

    return 0;
}