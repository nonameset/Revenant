#include "Script.h"
#include "Utils.h"

void Script::Init()
{
    InitialiseAllComponents();

    Update();
}

void Script::Update()
{
    while (true)
    {
        WAIT(0);
    }
}