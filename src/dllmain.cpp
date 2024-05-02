#include "Utils.h"
#include "ScriptManager.h"
#include "Controllers/PickupController.h"
#include "Controllers/PlayerController.h"
#include "fwDecorator.h"

void OnScriptInit()
{
    using namespace revenant;

    g_Logger = std::make_unique<Logger>();
    g_Logger->Info("Revenant has been initialised.");

    InitialiseAllComponents();

    g_ScriptManager = std::make_unique<ScriptManager>();
    g_PickupController = std::make_unique<PickupController>();
    g_PlayerController = std::make_unique<PlayerController>();
    g_ScriptManager->AddScript(g_PickupController);
    g_ScriptManager->AddScript(g_PlayerController);

    // Wait for the game to finish loading before we continue.
    while (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
        WAIT(500);

    while (g_Running)
    {
        WAIT(0);

        g_ScriptManager->OnTick();
    }
}

void OnScriptAbort()
{
    using namespace revenant;

    for (auto&& prop : g_PickupController->m_Pickups)
    {
        if (prop.first.IsValid())
        {
            prop.first.SetAsMissionEntity();
            prop.first.Delete();
        }

        if (prop.second.Exists())
        {
            prop.second.Delete();
        }
    }
}

bool __stdcall DllMain(HINSTANCE hInstance, DWORD reason, LPVOID reserved)
{
    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            scriptRegister(hInstance, OnScriptInit);
            break;
        case DLL_PROCESS_DETACH:
            OnScriptAbort();
            scriptUnregister(hInstance);
            break;
    }
    return true;
}