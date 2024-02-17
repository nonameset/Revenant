#pragma once

#include "CTaskDataInfo.h"
#include "Utils.h"

void CTaskDataInfoManager::InitialisePatterns()
{
    m_TaskDataManagerInstance = GetRelativeReference<CTaskDataInfoManager>(
                                    "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 89 38 0F B7 54 24 ? 4C 8B 0D ? ? ? ?", 3, 7);
}

CTaskDataInfo *CTaskDataInfoManager::Create(const char *name, eTaskDataInfoFlags flags)
{
    CTaskDataInfo* taskDataInfo = (CTaskDataInfo*)rage::tlsContext::get()->m_allocator->Allocate(sizeof(CTaskDataInfo), 16, 0);
    taskDataInfo->m_Name = MISC::GET_HASH_KEY(name);
    taskDataInfo->m_Flags |= flags;

    CTaskDataInfoManager::m_TaskDataManagerInstance->m_aTaskData.append(taskDataInfo);

    return taskDataInfo;
}

void CTaskDataInfoManager::Update(const char *name, eTaskDataInfoFlags flags)
{
    CTaskDataInfoManager* taskDataInfoManager = CTaskDataInfoManager::m_TaskDataManagerInstance;

    for (int i = 0; i < taskDataInfoManager->m_aTaskData.count(); i++)
    {
        CTaskDataInfo* taskDataInfo = taskDataInfoManager->m_aTaskData[i];

        if (taskDataInfo->m_Name == MISC::GET_HASH_KEY(name))
            taskDataInfo->m_Flags |= flags;
    }
}

bool CTaskDataInfoManager::IsValid(const char *name)
{
    CTaskDataInfoManager* taskDataInfoManager = CTaskDataInfoManager::m_TaskDataManagerInstance;

    for (int i = 0; i < taskDataInfoManager->m_aTaskData.count(); i++)
    {
        CTaskDataInfo* taskDataInfo = taskDataInfoManager->m_aTaskData[i];

        if (taskDataInfo->m_Name == MISC::GET_HASH_KEY(name))
            return true;
    }

    return false;
}

void CTaskDataInfoManager::Apply(CPed *ped, const char* name)
{
    // Save old taskDataInfo
    uintptr_t oldPedModel = *reinterpret_cast<uintptr_t*>(ped + 0x20);
    uint32_t oldTaskDataInfo = *reinterpret_cast<uint32_t*>(oldPedModel + 0x264);

    // Set new taskDataInfo
    uintptr_t pedModelInfo = *reinterpret_cast<uintptr_t*>(ped + 0x20);
    uint32_t taskDataInfo = *reinterpret_cast<uint32_t*>(pedModelInfo + 0x264) = MISC::GET_HASH_KEY(name);

    // Apply behaviour flags from new taskDataInfo.
    ped->SetBehaviorFromTaskData();

    // Reset taskDataInfo to old value.
    uintptr_t newPedModelInfo = *reinterpret_cast<uintptr_t*>(ped + 0x20);
    *reinterpret_cast<uint32_t*>(newPedModelInfo + 0x264) = taskDataInfo;
}