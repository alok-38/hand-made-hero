#include <windows.h>
#include <stdio.h>

void foo(void)
{
    OutputDebugStringA("This is the first thing we have actually printed.\n");
}

int CALLBACK WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR ipCmdLine,
    int nCmdShow)
{
    foo();

    // Example: Get the last error code
    DWORD err = GetLastError();

    char buffer[256];
    wsprintfA(buffer, "Last error code: %lu\n", err);
    OutputDebugStringA(buffer);

    return 0;
}
