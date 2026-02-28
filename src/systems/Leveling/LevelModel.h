#pragma once

#include "../../Characters/Stats.h"

// Growth stats per level (we reuse CharacterStats fields you already have).
// Only these fields matter for growth:
// nMaxHp, nMaxResource, nAtk, nDef, nMag, nRes, nSpd, nAcc
// Usually we do NOT grow MoveRange/AttackRange every level (leave them 0).
struct LevelModel
{
    CharacterStats GrowthPerLevel;

    // XP needed to go from Level -> Level+1
    int GetXpToNextLevel(int nLevel) const
    {
        // Simple curve: grows faster over time
        // Level 1->2: 100
        // Level 2->3: 140
        // Level 3->4: 180
        // ...
        return 100 + (nLevel - 1) * 40;
    }
};