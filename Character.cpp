#include "Character.h"

/*-------------------------------------------------------------------------------*/
Character::Character(string name, string location, Element type, Weapon weapon_type, string equipped_weapon, int stars)
	:
	m_name(name),
	m_location(location),
	m_type(type),
	m_weapon_type(weapon_type),
	m_equipped_weapon(equipped_weapon),
	m_stars(stars) {}