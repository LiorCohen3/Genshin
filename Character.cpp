#include "Character.h"

/*-------------------------------------------------------------------------------*/
Character::Character()
	:
	m_name(NULL),
	m_location(NULL),
	m_type(None_Element),
	m_weapon_type(None_weapon),
	m_equipped_weapon(NULL),
	m_stars(0) {}
/*-------------------------------------------------------------------------------*/
Character::Character(string name, string location, Element type, Weapon weapon_type, string equipped_weapon, int stars)
	:
	m_name(name),
	m_location(location),
	m_type(type),
	m_weapon_type(weapon_type),
	m_equipped_weapon(equipped_weapon),
	m_stars(stars) {}
/*-------------------------------------------------------------------------------*/
Character& Character::operator = (const Character& character)
{
	if (this != &character)
	{
		m_name = character.m_name;
		m_location = character.m_location;
		m_type = character.m_type;
		m_weapon_type = character.m_weapon_type;
		m_equipped_weapon = character.m_equipped_weapon;
		m_stars = character.m_stars;
	}
	return *this;
}
/*-------------------------------------------------------------------------------*/