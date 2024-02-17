#include "Ped.h"

namespace revenant
{
    Ped::Ped(const std::string &modelName, Vector3 position, float heading)
    {
        this->handle = PED::CREATE_PED(26, MISC::GET_HASH_KEY(modelName.c_str()), position.x, position.y, position.z, heading, false, false);
    }

    Ped::Ped(Vector3 position)
    {
        this->handle = PED::CREATE_RANDOM_PED(position.x, position.y, position.z);
    }
}