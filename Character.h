#pragma once
#include <iostream>
using namespace std;
#include "Element.h"
#include "Weapon.h"

class Character
{
public:
	Character();	
	Character(string name, string location, Element type, Weapon weapon_type, string equipped_weapon, int stars);
	Character& operator = (const Character& character);
	virtual ~Character() {};
	virtual int Attack();
	int EditWeapon(string weapon);
	
	string getName(){return m_name;}
	string getLocation(){return m_location;}
	Element getType(){return m_type;}
	Weapon getWeapon(){return m_weapon_type;}
	string getEquippedWeapon(){return m_equipped_weapon;}
	int getStars() {return m_stars;}

protected:
	string		m_name;
	string		m_location;
	Element		m_type;
	Weapon		m_weapon_type;
	string		m_equipped_weapon;
	int			m_stars;
};