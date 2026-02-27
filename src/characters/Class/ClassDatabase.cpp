#include "ClassDatabase.h"

static ClassData BuildVanguard() {
	ClassData Data;

	Data.eType = eClassType::Vanguard;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 150;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 35;

	Data.BaseStats.nAtk = 15;
	Data.BaseStats.nDef = 9;
	Data.BaseStats.nMag = 0;
	Data.BaseStats.nRes = 6;
	Data.BaseStats.nSpd = 8;
	Data.BaseStats.nAcc = 80;
	
	Data.BaseStats.nMoveRange = 4;
	Data.BaseStats.nAttackRange = 1;

	return Data;
}

static ClassData BuildKnight() {
	ClassData Data;

	Data.eType = eClassType::Knight;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 170;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 30;

	Data.BaseStats.nAtk = 11;
	Data.BaseStats.nDef = 14;
	Data.BaseStats.nMag = 0;
	Data.BaseStats.nRes = 9;
	Data.BaseStats.nSpd = 6;
	Data.BaseStats.nAcc = 75;

	Data.BaseStats.nMoveRange = 3;
	Data.BaseStats.nAttackRange = 1;

	return Data;
}

static ClassData BuildDuelist() {
	ClassData Data;

	Data.eType = eClassType::Duelist;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 115;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 40;

	Data.BaseStats.nAtk = 13;
	Data.BaseStats.nDef = 6;
	Data.BaseStats.nMag = 0;
	Data.BaseStats.nRes = 5;
	Data.BaseStats.nSpd = 14;
	Data.BaseStats.nAcc = 85;

	Data.BaseStats.nMoveRange = 5;
	Data.BaseStats.nAttackRange = 1;

	return Data;
}

static ClassData BuildRanger() {
	ClassData Data;

	Data.eType = eClassType::Ranger;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 105;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 40;

	Data.BaseStats.nAtk = 12;
	Data.BaseStats.nDef = 6;
	Data.BaseStats.nMag = 0;
	Data.BaseStats.nRes = 5;
	Data.BaseStats.nSpd = 12;
	Data.BaseStats.nAcc = 90;

	Data.BaseStats.nMoveRange = 5;
	Data.BaseStats.nAttackRange = 3;

	return Data;
}

static ClassData BuildSharpshooter() {
	ClassData Data;

	Data.eType = eClassType::Sharpshooter;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 95;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 35;

	Data.BaseStats.nAtk = 16;
	Data.BaseStats.nDef = 4;
	Data.BaseStats.nMag = 0;
	Data.BaseStats.nRes = 4;
	Data.BaseStats.nSpd = 9;
	Data.BaseStats.nAcc = 95;

	Data.BaseStats.nMoveRange = 4;
	Data.BaseStats.nAttackRange = 4;

	return Data;
}

static ClassData BuildBandit() {
	ClassData Data;

	Data.eType = eClassType::Bandit;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 110;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 45;

	Data.BaseStats.nAtk = 11;
	Data.BaseStats.nDef = 5;
	Data.BaseStats.nMag = 0;
	Data.BaseStats.nRes = 4;
	Data.BaseStats.nSpd = 13;
	Data.BaseStats.nAcc = 88;

	Data.BaseStats.nMoveRange = 5;
	Data.BaseStats.nAttackRange = 1;

	return Data;
}

static ClassData BuildShadowblade() {
	ClassData Data;

	Data.eType = eClassType::Shadowblade;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 100;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 50;

	Data.BaseStats.nAtk = 14;
	Data.BaseStats.nDef = 4;
	Data.BaseStats.nMag = 0;
	Data.BaseStats.nRes = 5;
	Data.BaseStats.nSpd = 16;
	Data.BaseStats.nAcc = 90;

	Data.BaseStats.nMoveRange = 6;
	Data.BaseStats.nAttackRange = 1;

	return Data;
}

static ClassData BuildLightSorcerer() {
	ClassData Data;

	Data.eType = eClassType::LightSorcerer;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 95;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 110;

	Data.BaseStats.nAtk = 5;
	Data.BaseStats.nDef = 4;
	Data.BaseStats.nMag = 15;
	Data.BaseStats.nRes = 10;
	Data.BaseStats.nSpd = 10;
	Data.BaseStats.nAcc = 85;

	Data.BaseStats.nMoveRange = 4;
	Data.BaseStats.nAttackRange = 3;

	return Data;
}

static ClassData BuildDarkSorcerer() {
	ClassData Data;

	Data.eType = eClassType::DarkSorcerer;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 100;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 100;

	Data.BaseStats.nAtk = 6;
	Data.BaseStats.nDef = 4;
	Data.BaseStats.nMag = 16;
	Data.BaseStats.nRes = 8;
	Data.BaseStats.nSpd = 9;
	Data.BaseStats.nAcc = 82;

	Data.BaseStats.nMoveRange = 4;
	Data.BaseStats.nAttackRange = 3;

	return Data;
}

static ClassData BuildSage() {
	ClassData Data;

	Data.eType = eClassType::Sage;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 105;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 120;

	Data.BaseStats.nAtk = 6;
	Data.BaseStats.nDef = 6;
	Data.BaseStats.nMag = 12;
	Data.BaseStats.nRes = 12;
	Data.BaseStats.nSpd = 10;
	Data.BaseStats.nAcc = 88;

	Data.BaseStats.nMoveRange = 4;
	Data.BaseStats.nAttackRange = 2;

	return Data;
}

static ClassData BuildNecromancer() {
	ClassData Data;

	Data.eType = eClassType::Necromancer;

	Data.BaseStats.nMaxHp, Data.BaseStats.nCurrHp = 110;
	Data.BaseStats.nMaxResource, Data.BaseStats.nCurrResource = 105;

	Data.BaseStats.nAtk = 7;
	Data.BaseStats.nDef = 5;
	Data.BaseStats.nMag = 14;
	Data.BaseStats.nRes = 9;
	Data.BaseStats.nSpd = 8;
	Data.BaseStats.nAcc = 80;

	Data.BaseStats.nMoveRange = 4;
	Data.BaseStats.nAttackRange = 2;

	return Data;
}

const ClassData& GetClassData(eClassType eType)
{
	switch (eType) {

		case eClassType::Vanguard: {
			static const ClassData Data = BuildVanguard();
			return Data;
		}
		case eClassType::Knight: {
			static const ClassData Data = BuildKnight();
			return Data;
		}
		case eClassType::Duelist: {
			static const ClassData Data = BuildDuelist();
			return Data;
		}
		case eClassType::Ranger: {
			static const ClassData Data = BuildRanger();
			return Data;
		}
		case eClassType::Sharpshooter: {
			static const ClassData Data = BuildSharpshooter();
			return Data;
		}
		case eClassType::Bandit: {
			static const ClassData Data = BuildBandit();
			return Data;
		}
		case eClassType::Shadowblade: {
			static const ClassData Data = BuildShadowblade();
			return Data;
		}
		case eClassType::LightSorcerer: {
			static const ClassData Data = BuildLightSorcerer();
			return Data;
		}
		case eClassType::DarkSorcerer: {
			static const ClassData Data = BuildDarkSorcerer();
			return Data;
		}
		case eClassType::Sage: {
			static const ClassData Data = BuildSage();
			return Data;
		}
		case eClassType::Necromancer: {
			static const ClassData Data = BuildNecromancer();
			return Data;
		}
		default: {
			static const ClassData Data = BuildVanguard();
			return Data;
		}
	}
}