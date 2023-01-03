#pragma once
#include "Character.h"
#include "LegendaryCharacter.h"
#include "EpicCharacter.h"

class Player
{
public:
	Player(string name);
	~Player();
	void AddCharacterToData();
	void EditWeapons();
	void EditActiveTeam();
	void EvaluateTeam();
	void PrintDataCharacters();
	void PrintActiveCharacters(ostream& out = cout) const;
	void PrintWeapons();
	bool IsActiveCharactersEmpty() { return !(m_active_characters[0] || m_active_characters[1] || m_active_characters[2] || m_active_characters[3]); }
	
private:
	string		 m_name;
	Character**	 m_active_characters;
	Character**  m_data_characters;
	int			 m_curr_num_of_characters;
	int			 m_max_num_of_characters;
};

ostream& operator << (ostream& out, Player& player);
