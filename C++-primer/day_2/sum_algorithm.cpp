#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int how_many;

    cout << "How many integers do you want to sum? ";
    cin >> how_many;

    int value;
    for (int i = 0; i < how_many; ++i)
    {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> value;
        sum += value;
    }

    cout << "Sum of " << how_many << " integers = " << sum << endl;
    return 0;
}
