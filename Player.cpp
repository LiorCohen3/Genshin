#include "Player.h"
#define MAX_ACTIVE_CHARACTERS  4

/*-------------------------------------------------------------------------------*/
Player::Player(string name)
	:
	m_name(name),
	m_data_characters(NULL),
	m_num_of_characters(0)
{
	m_active_characters = new Character* [MAX_ACTIVE_CHARACTERS];
	if (m_active_characters == NULL)
	{
		cout << "Memory Error! Player not created" << endl;
	}
}

/*-------------------------------------------------------------------------------*/
Player::~Player()
{
	for (int i = 0; i < MAX_ACTIVE_CHARACTERS; i++)
	{
		delete m_active_characters[i];
	}
	delete[] m_active_characters;
	delete[] m_data_characters;
}