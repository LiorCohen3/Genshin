#pragma once
#include "Character.h"

class Player
{
public:
	Player(string name);
	~Player();

private:
	string		m_name;
	Character**	m_active_characters;
	Character*  m_data_characters;
	int			m_num_of_characters;
};
