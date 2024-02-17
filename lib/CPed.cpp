#pragma once

#include "CPed.h"
#include "Utils.h"

bool (*CPed__HasHeadBlend) (CPed*);
void (*CPed__SetBehaviorFromTaskData) (CPed*);

void CPed::InitialisePatterns()
{
    ReadCall(
            hook::get_pattern(
                    "E8 ? ? ? ? 84 C0 74 2E 48 8B 0D ? ? ? ? 48 8B D3"),
                        CPed__HasHeadBlend);

    ConvertCall(
            hook::get_pattern(
                    "48 8B 41 20 48 8B D1 44 8B 88 ? ? ? ? 45 85 C9 74 32"),
                        CPed__SetBehaviorFromTaskData);
}

bool CPed::HasHeadBlend()
{
    return CPed__HasHeadBlend(this);
}

void CPed::SetBehaviorFromTaskData()
{
    return CPed__SetBehaviorFromTaskData(this);
}