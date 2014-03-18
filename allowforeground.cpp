#include <Windows.h>

int CALLBACK wWinMain(HINSTANCE, HINSTANCE, LPWSTR, int)
{
    return AllowSetForegroundWindow(ASFW_ANY);
}
