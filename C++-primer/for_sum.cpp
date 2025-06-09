#include <iostream>>

using namespace std;

int main()
{
    int sum = 0;

    for (int value = 1; value <= 10; value++)
    {
        sum += value;
    }

    cout << "Sum from 1 to 10 inclusive = " << sum << endl;

    return 0;
}