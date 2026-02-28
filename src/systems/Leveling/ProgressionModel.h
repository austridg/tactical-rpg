#pragma once
#include <array>
#include "../../Characters/Stats.h"
#include "Rarity.h"
#include "StatSpend.h"
#include "../../Characters/Class/ClassData.h"

struct StatCaps {
    int nMaxHp = 9999;
    int nMaxResource = 9999;

    int nAtk = 999;
    int nDef = 999;
    int nMag = 999;
    int nRes = 999;
    int nSpd = 999;
    int nAcc = 999;

    int nMoveRange = 9;
    int nAttackRange = 9;
};

struct CostTier {
    int nHighestStatValue;
    int nCost;
};

struct CostRule {
    int nStatIncreasePerUnit = 0;
    
    std::array<CostTier, 5> Tiers{};
    int nTierCount = 0;

    SpendCost GetCostForCurrentStat(int nCurrentStat) const {
        for (int i = 0; i < nTierCount; i++) {
            if (nCurrentStat <= Tiers[i].nHighestStatValue) {
                return { Tiers[i].nCost, nStatIncreasePerUnit };
            }
        }

        return { Tiers[nTierCount - 1].nCost, nStatIncreasePerUnit };
    }
};

struct ProgressionModel {
    eClassType eType;
    StatCaps Caps;

    std::array<CostRule, (int)eStatType::AttackRange + 1> CostRules;

    SpendCost GetSpendCost(eStatType eStat, int nCurrentStat) const {
        return CostRules[(int)eStat].GetCostForCurrentStat(nCurrentStat);
    }
};