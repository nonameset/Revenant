#ifndef REVENANT_PICKUPCONTROLLER_H
#define REVENANT_PICKUPCONTROLLER_H

#pragma once

#include "Script.h"
#include "GTA/entities/Prop.h"

namespace revenant
{
    class PickupController : public Script
    {
    public:
        explicit PickupController() = default;
        ~PickupController() noexcept = default;

        bool IsInitialized() override;
        void Initialize() override;
        void Destroy() override;
        void Tick() override;
    private:
        bool m_Initialized {};
        int m_LastPickupCreatedAt = MISC::GET_GAME_TIMER();
        int m_LastUpdateAt = MISC::GET_GAME_TIMER();
        std::vector<Prop> m_Pickups;
        const int MAX_PICKUP_COUNT = 3;
    };

    inline std::shared_ptr<PickupController> g_PickupController;
}

#endif //REVENANT_PICKUPCONTROLLER_H