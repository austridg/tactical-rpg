#pragma once
#include "../Stats.h"

enum class eClassType { 
	
	Vanguard,
	Knight,
	Duelist,

	Ranger,
	Sharpshooter,
	
	Bandit,
	Shadowblade,

	LightSorcerer,
	DarkSorcerer, 

	Sage, 
	Necromancer

};

struct ClassData {
	eClassType eType;
	CharacterStats BaseStats;
};