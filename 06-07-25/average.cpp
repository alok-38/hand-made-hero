#include <iostream>
using namespace std;

int main()
{
    float values[5];
    float sum = 0;

    cout << "Enter 5 float values separated by spaces:" << endl;

    for (int i = 0; i < 5; ++i)
    {
        cin >> values[i];
        sum += values[i];
    }

    float average = sum / 5;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
