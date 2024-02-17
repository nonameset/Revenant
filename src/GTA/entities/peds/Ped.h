#ifndef REVENANT_PED_H
#define REVENANT_PED_H

#pragma once

#include "../Entity.h"

namespace revenant
{
    class Ped : public Entity
    {
    public:
        Ped(const std::string& modelName, Vector3 position, float heading);
        Ped(Vector3 position);
    };
}

#endif //REVENANT_PED_H