#include <iostream>
using namespace std;

int main()
{
    class Protagonist
    {
    public:
        string name;

        // Constructor
        Protagonist(string gordon)
        {
            name = gordon;
        }

        // Method
        void date()
        {
            cout << name << " will get dated by Alyx." << endl;
        }
    };

    // Create an instance and call the method
    Protagonist gordon("Gordon Freeman");
    gordon.date();

    return 0;
}
