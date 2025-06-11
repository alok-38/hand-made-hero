#include <iostream>
using namespace std;

int *createDanglingPointer()
{
    int localVar = 42;
    return &localVar; // Returning address of local variable (bad!)
}

int main()
{
    int *ptr = createDanglingPointer();
    cout << *ptr << endl; // Undefined behavior! ptr points to invalid memory
    return 0;
}
