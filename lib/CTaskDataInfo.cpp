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
    taskDataInfo->m_Flags = flags;

    CTaskDataInfoManager::m_TaskDataManagerInstance->m_aTaskData.append(taskDataInfo);

    return taskDataInfo;
}

bool CTaskDataInfoManager::IsValid(const char *name)
{
    for (int i = 0; i < CTaskDataInfoManager::m_TaskDataManagerInstance->m_aTaskData.count(); ++i)
    {
        if (CTaskDataInfoManager::m_TaskDataManagerInstance->m_aTaskData[i]->m_Name == MISC::GET_HASH_KEY(name))
            return true;
    }
    return false;
}

// TODO: Check offsets again, as I am not sure if they are correct.
void CTaskDataInfoManager::Apply(CPed *ped, const char* name)
{
    uint32_t oldTaskData = *reinterpret_cast<uint32_t*>((ped + 0x20) + 0x264);
    *reinterpret_cast<uint32_t*>((ped + 0x20) + 0x264) = MISC::GET_HASH_KEY(name);
    ped->SetBehaviorFromTaskData();
    *reinterpret_cast<uint32_t*>((ped + 0x20) + 0x264) = oldTaskData;
}