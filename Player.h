#pragma once
#include "Character.h"
#include "LegendaryCharacter.h"
#include "EpicCharacter.h"

class Player
{
public:
	Player(string name);
	~Player();
	void add_character_to_data(Character character);
	void edit_weapon();
	void edit_active_team();
	void evaluate_team();
	void print_data_characters();
	void print_active_characters();

private:
	string		m_name;
	Character**	m_active_characters;
	Character*  m_data_characters;
	int			m_curr_num_of_characters;
	int			m_max_num_of_characters;
};
