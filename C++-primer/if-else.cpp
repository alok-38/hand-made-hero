#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // Maps to store counts
    map<string, int> word_count;
    map<int, int> number_count;

    // Preload some string data
    word_count["apple"] = 3;
    word_count["banana"] = 5;
    word_count["orange"] = 2;

    // Get words from user
    string word;
    cout << "Enter words (type 'END' to stop):\n";
    while (cin >> word)
    {
        if (word == "END")
            break;
        word_count[word]++;
    }

    // Clear cin state before reading numbers
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Get numbers from user
    int number;
    cout << "\nEnter numbers (non-integer input to stop):\n";
    while (cin >> number)
    {
        number_count[number]++;
    }

    // Output word counts
    cout << "\nWord Occurrences:\n";
    for (const auto &pair : word_count)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Output number counts
    cout << "\nNumber Occurrences:\n";
    for (const auto &pair : number_count)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
