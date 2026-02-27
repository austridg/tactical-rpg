#pragma once

struct CharacterStats {
	int nLevel = 1;

	int nMaxHp = 100, nCurrHp = 100;
	int nMaxResource = 50, nCurrResource = 50;

	int nAtk = 0; // base attack stat
	int nDef = 0; // base defense stat
	int nMag = 0; // base magic stat
	int nRes = 0; // base resistance stat
	int nSpd = 0; // base speed stat
	int nAcc = 0; // base accuracy stat
	int nEva = 0; // base evasion stat

	int nMoveRange = 4;
	int nAttackRange = 1;

	int nAtkOffset = 0;
	int nDefOffset = 0;
	int nMagOffset = 0;
	int nResOffset = 0;
	int nSpdOffset = 0;
	int nAccOffset = 0;
	int nEvaOffset = 0;

	int nMoveRangeOffset = 0;
	int nAttackRangeOffset = 0;
};