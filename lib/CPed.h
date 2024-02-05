#ifndef REVENANT_CPED_H
#define REVENANT_CPED_H

class CPed
{
public:
    bool HasHeadBlend();
    void SetBehaviorFromTaskData();

    static void InitialisePatterns();
};

#endif //REVENANT_CPED_H