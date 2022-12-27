#pragma once
#include "Character.h"

class LegendaryCharacter: public Character
{
public:
	LegendaryCharacter(string name, string location, Element type, Weapon weapon_type, string equipped_weapon, string signature_weapon)
		: Character(name, location, type, weapon_type, equipped_weapon, 5), m_signature_weapon(signature_weapon) {}
	~LegendaryCharacter();

private:
	string	m_signature_weapon;
};