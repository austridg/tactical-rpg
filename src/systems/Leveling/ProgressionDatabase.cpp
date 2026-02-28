#include "ProgressionDatabase.h"

static ProgressionModel BuildVanguardProg()
{
    ProgressionModel M;
    M.eType = eClassType::Vanguard;

    M.Caps.nMoveRange = 5;
    M.Caps.nAttackRange = 2;

    M.Caps.nSpd = 25;
    M.Caps.nAcc = 95;

    return M;
}

static ProgressionModel BuildKnightProg()
{
    ProgressionModel M;
    M.eType = eClassType::Knight;

    M.Caps.nMoveRange = 4;
    M.Caps.nAttackRange = 2;

    M.Caps.nSpd = 20;
    M.Caps.nAcc = 90;

    return M;
}

static ProgressionModel BuildDuelistProg()
{
    ProgressionModel M;
    M.eType = eClassType::Duelist;

    M.Caps.nMoveRange = 6;
    M.Caps.nAttackRange = 2;

    M.Caps.nSpd = 35;
    M.Caps.nAcc = 100;

    return M;
}

static ProgressionModel BuildRangerProg()
{
    ProgressionModel M;
    M.eType = eClassType::Ranger;

    M.Caps.nMoveRange = 6;
    M.Caps.nAttackRange = 5;

    M.Caps.nAcc = 110;

    return M;
}

static ProgressionModel BuildSharpshooterProg()
{
    ProgressionModel M;
    M.eType = eClassType::Sharpshooter;

    M.Caps.nMoveRange = 5;
    M.Caps.nAttackRange = 6;

    M.Caps.nAcc = 120;

    return M;
}

static ProgressionModel BuildBanditProg()
{
    ProgressionModel M;
    M.eType = eClassType::Bandit;

    M.Caps.nMoveRange = 6;
    M.Caps.nAttackRange = 2;

    M.Caps.nSpd = 35;
    M.Caps.nAcc = 105;

    return M;
}

static ProgressionModel BuildShadowbladeProg()
{
    ProgressionModel M;
    M.eType = eClassType::Shadowblade;

    M.Caps.nMoveRange = 7;
    M.Caps.nAttackRange = 2;

    M.Caps.nSpd = 40;
    M.Caps.nAcc = 105;

    return M;
}

static ProgressionModel BuildLightSorcererProg()
{
    ProgressionModel M;
    M.eType = eClassType::LightSorcerer;

    M.Caps.nMoveRange = 5;
    M.Caps.nAttackRange = 5;

    return M;
}

static ProgressionModel BuildDarkSorcererProg()
{
    ProgressionModel M;
    M.eType = eClassType::DarkSorcerer;

    M.Caps.nMoveRange = 5;
    M.Caps.nAttackRange = 5;

    return M;
}

static ProgressionModel BuildSageProg()
{
    ProgressionModel M;
    M.eType = eClassType::Sage;

    M.Caps.nMoveRange = 5;
    M.Caps.nAttackRange = 4;

    return M;
}

static ProgressionModel BuildNecromancerProg()
{
    ProgressionModel M;
    M.eType = eClassType::Necromancer;

    M.Caps.nMoveRange = 5;
    M.Caps.nAttackRange = 4;

    return M;
}

const ProgressionModel& GetProgressionModel(eClassType eType)
{
    switch (eType)
    {
    case eClassType::Vanguard: { static const ProgressionModel M = BuildVanguardProg();      return M; }
    case eClassType::Knight: { static const ProgressionModel M = BuildKnightProg();        return M; }
    case eClassType::Duelist: { static const ProgressionModel M = BuildDuelistProg();       return M; }
    case eClassType::Ranger: { static const ProgressionModel M = BuildRangerProg();        return M; }
    case eClassType::Sharpshooter: { static const ProgressionModel M = BuildSharpshooterProg();  return M; }
    case eClassType::Bandit: { static const ProgressionModel M = BuildBanditProg();        return M; }
    case eClassType::Shadowblade: { static const ProgressionModel M = BuildShadowbladeProg();   return M; }
    case eClassType::LightSorcerer: { static const ProgressionModel M = BuildLightSorcererProg(); return M; }
    case eClassType::DarkSorcerer: { static const ProgressionModel M = BuildDarkSorcererProg();  return M; }
    case eClassType::Sage: { static const ProgressionModel M = BuildSageProg();          return M; }
    case eClassType::Necromancer: { static const ProgressionModel M = BuildNecromancerProg();   return M; }
    default: { static const ProgressionModel M = BuildVanguardProg();      return M; }
    }
}