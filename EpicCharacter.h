#pragma once
#include "Character.h"

class EpicCharacter : public Character
{
public:
	EpicCharacter(string name, string location, Element type, Weapon weapon_type, string equipped_weapon) 
		: Character(name, location, type, weapon_type, equipped_weapon, 4) {}
	~EpicCharacter() {};
};