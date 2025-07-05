#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x; // ptr stores the address of x
    // dereferencing
    cout << *ptr << endl;
    // Modify the value of x through the pointer
    *ptr = 20;
    cout << x << endl;
    // Add pointer arithmetic
    int arr[3] = {1, 2, 3};
    int *p = arr;
    cout << *p << endl;
    cout << *(p + 1) << endl
         << *(p + 2) << endl;
    //  Use a loop to traverse an array using a pointer
    int arr_1[] = {5, 10, 15, 20};
    for (int i = 0; i < 4; i++)
    {
        cout << *(p + i) << " ";
    }
}
