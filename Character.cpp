#include "Character.h"

/*-------------------------------------------------------------------------------*/
Character::Character()
	:
	m_name(""),
	m_location(""),
	m_type(None_Element),
	m_weapon_type(None_weapon),
	m_equipped_weapon(""),
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
void Character::Attack()
{
	switch (m_weapon_type)
	{
	case None_weapon:
		break;
	case Sword:
		cout << m_name << " swing swiftly the sword" << endl;
		break;
	case Polearm:
		cout << m_name << " agile with polearm" << endl;
		break;
	case Catalyst:
		cout << m_name << " cast spells with catalyst" << endl;
		break;
	case Claymore:
		cout << m_name << " swing the heavy claymore" << endl;
		break;
	case Bow:
		cout << m_name << " shot from afar with the bow" << endl;
		break;
	}
}