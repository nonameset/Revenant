#include "Script.h"

bool __stdcall DllMain(HINSTANCE hInstance, DWORD reason, LPVOID reserved)
{
    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            scriptRegister(hInstance, Script::Init);
            break;
        case DLL_PROCESS_DETACH:
            scriptUnregister(hInstance);
            break;
    }
    return true;
}