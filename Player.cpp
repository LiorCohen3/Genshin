#include "Player.h"
#define MAX_ACTIVE_CHARACTERS  4
#define MAX_NUM_OF_CHARACTERS  100

/*-------------------------------------------------------------------------------*/
Player::Player(string name)
	:
	m_name(name),
	m_data_characters(NULL),
	m_curr_num_of_characters(0),
	m_max_num_of_characters(MAX_NUM_OF_CHARACTERS)
{
	m_active_characters = new Character* [MAX_ACTIVE_CHARACTERS];
	if (m_active_characters == NULL)
	{
		cout << "Memory Error! Player not created" << endl;
	}
	for (int i = 0; i < MAX_ACTIVE_CHARACTERS; i++)
	{
		m_active_characters[i] = NULL;
	}
	

	m_data_characters = new Character [MAX_NUM_OF_CHARACTERS];
	if (m_data_characters == NULL)
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
/*-------------------------------------------------------------------------------*/
void Player::print_data_characters()
{
	for (int i = 0; i < m_curr_num_of_characters; i++)
	{
		cout << "Character Number  " << i+1 << endl;
		cout << "Name: " << m_data_characters[i].getName() << endl;
		cout << "Locaton: " << m_data_characters[i].getLocation() << endl;
		cout << "Element Type: " << m_data_characters[i].getType() << endl;
		cout << "Weapon Type: " << m_data_characters[i].getWeapon() << endl;
		cout << "Equipped Weapon: " << m_data_characters[i].getequipped_weapon() << endl;
		cout << "Stars: " << m_data_characters[i].getStars() << endl;
		cout << "Name: " << m_data_characters[i].getName() << endl;
		cout << endl;
	} 
}
/*-------------------------------------------------------------------------------*/
void Player::print_active_characters()
{
	for (int i = 0; i < MAX_ACTIVE_CHARACTERS; i++)
	{
		cout << "Active Character Number  " << i+1 << endl;
		if (m_active_characters[i] != NULL)
		{
			cout << "Name: " << m_active_characters[i]->getName() << endl;
			cout << "Locaton: " << m_active_characters[i]->getLocation() << endl;
			cout << "Element Type: " << m_active_characters[i]->getType() << endl;
			cout << "Weapon Type: " << m_active_characters[i]->getWeapon() << endl;
			cout << "Equipped Weapon: " << m_active_characters[i]->getequipped_weapon() << endl;
			cout << "Stars: " << m_active_characters[i]->getStars() << endl;
			cout << "Name: " << m_active_characters[i]->getName() << endl;
			cout << endl;
		}else cout << "Empty" << endl;
	} 
}
/*-------------------------------------------------------------------------------*/
void Player::add_character_to_data(Character character)
{
	if (m_curr_num_of_characters != m_max_num_of_characters)
	{
		// Character new_character;
		// new_character = character;

		string		name 				= character.getName();
		string		location			= character.getLocation();
		Element		type				= character.getType();
		Weapon		weapon_type			= character.getWeapon();
		string		equipped_weapon		= character.getequipped_weapon();
		int			stars				= character.getStars();

		if (stars == 4)
		{
			EpicCharacter new_character_E(name, location, type, weapon_type, equipped_weapon);
			m_data_characters[m_curr_num_of_characters] = new_character_E;
			m_curr_num_of_characters++;
		}

		string signatur_weapon;

		if (stars == 5)
		{
			cout << "This character is legendary, please enter signatue weapon: ";
			cin >> signatur_weapon;
			LegendaryCharacter new_character_L(name, location, type, weapon_type, equipped_weapon, signatur_weapon);
			m_data_characters[m_curr_num_of_characters] = new_character_L;
			m_curr_num_of_characters++;
		}

		cout << "Character added successfully" << endl;
	}
	else cout << "Couldn't add character, You have reached the maximum number of characters" << endl;
}
/*-------------------------------------------------------------------------------*/
void Player::edit_active_team()
{
	print_data_characters();
	int sel1;
	do
	{
		cout << "Which character do you want? \n Select by number" << endl;
		cin >> sel1;
	} while (sel1 < 1 || sel1> 100);
	sel1 = sel1 -1;


	print_active_characters();
	int sel2;
	do
	{
		cout << "Which one would you like to change? \n Select by number" << endl;
		cin >> sel2;
	} while (sel2 < 1 || sel2> 4);
	sel2 = sel2-1;

	m_active_characters[sel2] = &m_data_characters[sel1];

	cout << "Character added to active characters successfully" << endl;
}
/*-------------------------------------------------------------------------------*/