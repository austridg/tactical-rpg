#pragma once
#include <algorithm>

enum class eStatType {
    MaxHp,
    MaxResource,
    Atk,
    Def,
    Mag,
    Res,
    Spd,
    Acc,
    MoveRange,
    AttackRange
};

struct SpendCost {
    int nPointsPerUnit;
    int nStatIncreasePerUnit;
};