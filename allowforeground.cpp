#include <Windows.h>

int CALLBACK wWinMain(HINSTANCE, HINSTANCE, LPWSTR, int)
{
    BOOL ret = AllowSetForegroundWindow(ASFW_ANY);
    ExitProcess(ret? 0: 1);
    return 0;
}
