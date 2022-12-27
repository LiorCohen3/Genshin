#pragma once
#include <iostream>
using namespace std;
#include "Element.h"
#include "Weapon.h"

class Character
{
public:
	Character(string name, string location, Element type, Weapon weapon_type, string equipped_weapon, int stars);
	virtual ~Character() {};
	virtual int Attack();
	int EditWeapon(string weapon);

private:
	string		m_name;
	string		m_location;
	Element		m_type;
	Weapon		m_weapon_type;
	string		m_equipped_weapon;
	int			m_stars;
};