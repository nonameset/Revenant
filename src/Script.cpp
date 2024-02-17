#include "Script.h"
#include "Utils.h"

void Script::Init()
{
    using namespace revenant;

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