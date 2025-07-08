#include <iostream>
#include <vector>
#include <string>
#include <sstream> // For stringstream
using namespace std;

int main()
{
    vector<float> values;
    float sum;
    string line;

    cout << "Enter float values separated by spaces:" << endl;
    getline(cin, line); // read entire line

    stringstream ss(line);
    float num;
    while (ss >> num)
    {
        values.push_back(num);
    }

    if (values.empty())
    {
        cout << "No valid numbers entered." << endl;
        return 1;
    }

    sum = 0;
    for (float v : values)
    {
        sum += v;
    }

    cout << "Sum = " << sum << endl;
    cout << "Average = " << sum / values.size() << endl;

    return 0;
}
