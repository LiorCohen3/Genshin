#include "Player.h"
#include <string>
#define MAX_ACTIVE_CHARACTERS  4
#define MAX_NUM_OF_CHARACTERS  100

string element_name_array[8] = /*An array that will help print the element as a string*/
{
	"None",
	"Anemo",
	"Pyro",
	"Cyro",
	"Hydro",
	"Electro",
	"Geo",
	"Dendro"
};

string weapon_name_array[6] = /*An array that will help print the weapon as a string*/
{
	"None",
	"Sword",
	"Polearm",
	"Catalyst",
	"Claymore",
	"Bow"
};

//////////////////////Non-Player Functions/////////////////////////////////////////
/*-------------------------------------------------------------------------------*/
void CheckElementsReactions(Element element1, Element element2)
{
	if (element1 != element2 && element1 != None_Element && element2 != None_Element)
	{
		if ( (element1 == Cyro && element2 == Anemo) || (element2 == Cyro && element1 == Anemo) )
		{
			cout << "Blizzard" << endl;
		}
		if ((element1 == Dendro && element2 == Pyro) || (element2 == Dendro && element1 == Pyro))
		{
			cout << "Burn" << endl;
		}
		if ((element1 == Geo && (element2 == Pyro || element2 == Cyro || element2 == Electro || element2 == Hydro) ) || (element2 == Geo && (element1 == Pyro || element1 == Cyro || element1 == Electro || element1 == Hydro)))
		{
			cout << "Crystalize" << endl;
		}
		if ((element1 == Geo && element2 == Anemo) || (element2 == Geo && element1 == Anemo))
		{
			cout << "Dust" << endl;
		}
		if ((element1 == Electro && element2 == Hydro) || (element2 == Electro && element1 == Hydro))
		{
			cout << "Electro-Charged" << endl;
		}
		if ((element1 == Cyro && element2 == Hydro) || (element2 == Cyro && element1 == Hydro))
		{
			cout << "Frozen" << endl;
		}
		if ((element1 == Geo && element2 == Pyro) || (element2 == Geo && element1 == Pyro))
		{
			cout << "Magma" << endl;
		}
		if ((element1 == Cyro && element2 == Pyro) || (element2 == Cyro && element1 == Pyro))
		{
			cout << "Melt" << endl;
		}
		if ((element1 == Geo && element2 == Hydro) || (element2 == Geo && element1 == Hydro))
		{
			cout << "Mud" << endl;
		}
		if ((element1 == Electro && element2 == Pyro) || (element2 == Electro && element1 == Pyro))
		{
			cout << "Overloaded" << endl;
		}
		if ((element1 == Dendro && element2 == Hydro) || (element2 == Dendro && element1 == Hydro))
		{
			cout << "Poison" << endl;
		}
		if ((element1 == Geo && element2 == Cyro) || (element2 == Geo && element1 == Cyro))
		{
			cout << "Shatter" << endl;
		}
		if ((element1 == Cyro && element2 == Electro) || (element2 == Cyro && element1 == Electro))
		{
			cout << "Superconduct" << endl;
		}
		if ((element1 == Anemo && (element2 == Pyro || element2 == Cyro || element2 == Electro || element2 == Hydro)) || (element2 == Anemo && (element1 == Pyro || element1 == Cyro || element1 == Electro || element1 == Hydro)))
		{
			cout << "Swirl" << endl;
		}
		if ((element1 == Geo && element2 == Dendro) || (element2 == Geo && element1 == Dendro))
		{
			cout << "Thorn" << endl;
		}
		if ((element1 == Pyro && element2 == Hydro) || (element2 == Pyro && element1 == Hydro))
		{
			cout << "Vaporize" << endl;
		}
	}
}
/*-------------------------------------------------------------------------------*/
void EvaluateElements(Element* element_array)/*Function will always get 4 elements in the array*/
{
	cout << "Passable Elements Reactions:" << endl;
	CheckElementsReactions(element_array[0], element_array[1]);
	CheckElementsReactions(element_array[0], element_array[2]);
	CheckElementsReactions(element_array[0], element_array[3]);
	CheckElementsReactions(element_array[1], element_array[2]);
	CheckElementsReactions(element_array[1], element_array[3]);
	CheckElementsReactions(element_array[2], element_array[3]);
	int counter1 = 0, counter2 = 0, counter3 = 0;
	if (element_array[0] != None_Element)
	{
		if (element_array[0] == element_array[1]) counter1++;
		if (element_array[0] == element_array[2]) counter1++;
		if (element_array[0] == element_array[3]) counter1++;
	}
	if (element_array[1] != None_Element && element_array[1] != element_array[0])
	{
		if (element_array[1] == element_array[2]) counter2++;
		if (element_array[1] == element_array[3]) counter2++;
	}
	if (element_array[2] != None_Element && element_array[2] != element_array[1] && element_array[2] != element_array[0])
	{
		if (element_array[2] == element_array[3]) counter3++;
	}
	if (counter1 > 0)
	{
		cout << counter1 + 1 << " Characters are " << element_name_array[element_array[0]] << " element" << endl
			<< "Adding " << (counter1 + 1) * 10 << "% " << element_name_array[element_array[0]] << " power" << endl;
	}
	if (counter2 > 0)
	{
		cout << counter2 + 1 << " Characters are " << element_name_array[element_array[1]] << " element" << endl
			<< "Adding " << (counter2 + 1) * 10 << "% " << element_name_array[element_array[1]] << " power" << endl;
	}
	if (counter3 > 0)
	{
		cout << counter3 + 1 << " Characters are " << element_name_array[element_array[2]] << " element" << endl
			<< "Adding " << (counter3 + 1) * 10 << "% " << element_name_array[element_array[2]] << " power" << endl;
	}
}
/*-------------------------------------------------------------------------------*/
void EvaluateLocations(string* location_array)/*Function will always get 4 elements in the array*/
{
	int counter1 = 0, counter2 = 0, counter3 = 0;
	if (location_array[0] != "")
	{
		if (location_array[0] == location_array[1]) counter1++;
		if (location_array[0] == location_array[2]) counter1++;
		if (location_array[0] == location_array[3]) counter1++;
	}
	if (location_array[1] != "" && location_array[1] != location_array[0])
	{
		if (location_array[1] == location_array[2]) counter2++;
		if (location_array[1] == location_array[3]) counter2++;
	}
	if (location_array[2] != "" && location_array[2] != location_array[1] && location_array[2] != location_array[0])
	{
		if (location_array[2] == location_array[3]) counter3++;
	}
	if (counter1 > 0)
	{
		cout << counter1 + 1 << " Characters from the same location:" << endl
			<< "Adding " << (counter1 + 1) * 10 << "% coordination" << endl;
	}
	if (counter2 > 0)
	{
		cout << counter2 + 1 << " Characters from the same location:" << endl
			<< "Adding " << (counter2 + 1) * 10 << "% coordination" << endl;
	}
	if (counter3 > 0)
	{
		cout << counter3 + 1 << " Characters from the same location:" << endl
			<< "Adding " << (counter3 + 1) * 10 << "% coordination" << endl;
	}
}
//////////////////////////Player Functions/////////////////////////////////////////
/*-------------------------------------------------------------------------------*/
Player::Player(string name)
	:
	m_name(name),
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
	

	m_data_characters = new Character* [MAX_NUM_OF_CHARACTERS];
	if (m_data_characters == NULL)
	{
		cout << "Memory Error! Player not created" << endl;
	}
	for (int j = 0; j < MAX_NUM_OF_CHARACTERS; j++)
	{
		m_data_characters[j] = NULL;
	}
}
/*-------------------------------------------------------------------------------*/
Player::~Player()
{
	for (int j = 0; j < MAX_NUM_OF_CHARACTERS; j++)
	{
		delete m_data_characters[j];
	}
	delete[] m_active_characters;
	delete[] m_data_characters;
}
/*-------------------------------------------------------------------------------*/
void Player::PrintDataCharacters()
{
	for (int i = 0; i < m_curr_num_of_characters; i++)
	{
		if (m_data_characters[i] != NULL)
		{
			cout << "==========Character " << i + 1 << "==========" << endl;
			cout << "Name: " << m_data_characters[i]->getName() << endl;
			cout << "Locaton: " << m_data_characters[i]->getLocation() << endl;
			cout << "Element Type: " << element_name_array[m_data_characters[i]->getType()] << endl;
			cout << "Weapon Type: " << weapon_name_array[m_data_characters[i]->getWeapon()] << endl;
			cout << "Equipped Weapon: " << m_data_characters[i]->getEquippedWeapon() << endl;
			cout << "Stars: " << m_data_characters[i]->getStars() << endl;
			cout << endl;
		}
		else return;
	} 
}
/*-------------------------------------------------------------------------------*/
void Player::PrintActiveCharacters(ostream& out) const
{
	for (int i = 0; i < MAX_ACTIVE_CHARACTERS; i++)
	{
		out << "Active Character Number  " << i+1 << endl;
		if (m_active_characters[i] != NULL)
		{
			out << "Name: " << m_active_characters[i]->getName() << endl;
			out << "Locaton: " << m_active_characters[i]->getLocation() << endl;
			out << "Element Type: " << element_name_array[m_active_characters[i]->getType()] << endl;
			out << "Weapon Type: " << weapon_name_array[m_active_characters[i]->getWeapon()] << endl;
			out << "Equipped Weapon: " << m_active_characters[i]->getEquippedWeapon() << endl;
			out << "Stars: " << m_active_characters[i]->getStars() << endl;
			out << endl;
		}else cout << "Empty" << endl;
	} 
}
/*-------------------------------------------------------------------------------*/
void Player::PrintWeapons()
{
	cout << "Weapons:" <<endl;
	cout << " 1 -Sword\n 2 - Polearm\n 3 - Catalyst\n 4 - Claymore\n 5 - Bow" << endl;
}
/*-------------------------------------------------------------------------------*/
void Player::AddCharacterToData()
{
	if (m_curr_num_of_characters != m_max_num_of_characters)	//If there is a place in the array
	{
		string		name, location, equipped_weapon;
		Element		type;
		Weapon		weapon_type;
		int			stars, sel_element, sel_weapon;
		cin.ignore();
		cout << "Enter character name: ";
		getline(cin, name);
		cout << "Enter character location: ";
		getline(cin, location);
		do
		{
			cout << "Enter character weapon type by number:\n1=Sword\n2=Polearm\n3=Catalyst\n4=Claymore\n5=Bow\n>";
			cin >> sel_weapon;
		} while (sel_weapon > 5 || sel_weapon < 1);
		weapon_type = static_cast<Weapon>(sel_weapon);
		cin.ignore();
		cout << "Enter character weapon name: ";
		getline(cin, equipped_weapon);
		do
		{
			cout << "Enter character element by number:\nAnemo=1\nPyro=2\nCyro=3\nHydro=4\nElectro=5\nGeo=6\nDendro=7\n>";
			cin >> sel_element;
		} while (sel_element < 1 || sel_element > 7);
		type = static_cast<Element>(sel_element);
		do
		{
			cout << "Enter character stats (4 or 5): ";
			cin >> stars;
		} while (stars != 4 && stars != 5);
		if (stars == 4)	//its an epic
		{
			m_data_characters[m_curr_num_of_characters] = new EpicCharacter(name, location, type, weapon_type, equipped_weapon);
		}
		if (stars == 5)	//its a legendary
		{
			string signature_weapon;
			cin.ignore();
			cout << "This character is legendary, please enter signatue weapon: ";
			getline(cin, signature_weapon);
			m_data_characters[m_curr_num_of_characters] = new LegendaryCharacter(name, location, type, weapon_type, equipped_weapon, signature_weapon);

		}
		m_curr_num_of_characters++;
		cout << "Character added successfully" << endl;
	}
	else cout << "Couldn't add character, You have reached the maximum number of characters" << endl;
}
/*-------------------------------------------------------------------------------*/
void Player::EditActiveTeam()
{
	if (m_curr_num_of_characters > 0)
	{
		PrintDataCharacters();
		int sel1;
		do
		{
			cout << "Which character do you want? \nSelect by number\n>";
			cin >> sel1;
		} while (sel1 < 1 || sel1> MAX_NUM_OF_CHARACTERS);
		sel1 = sel1 - 1;	//will get the index


		PrintActiveCharacters();
		int sel2;
		do
		{
			cout << "Which one would you like to change / add? \nSelect by number\n>";
			cin >> sel2;
		} while (sel2 < 1 || sel2> MAX_ACTIVE_CHARACTERS);
		sel2 = sel2 - 1;	//will get the index

		m_active_characters[sel2] = m_data_characters[sel1];
		cout << "Character added to active characters successfully" << endl;
	}
	else cout << "No characers in data yet!" << endl;
}
/*-------------------------------------------------------------------------------*/
void Player::EditWeapons()
{
	if (!IsActiveCharactersEmpty())
	{
		PrintActiveCharacters();
		int sel1;
		do
		{
			cout << "Which one would you like to change weapon? \nSelect by number\n>";
			cin >> sel1;
			cout << endl;
		} while (sel1 < 1 || sel1> MAX_ACTIVE_CHARACTERS);
		sel1 = sel1 - 1;	//will get the index

		PrintWeapons();
		Weapon weapon;
		int sel2;
		do
		{
			cout << "To which weapon would you like to change? \nSelect by number\n>";
			cin >> sel2;
			cout << endl;
		} while (sel2 < 1 || sel2> 5);

		switch (sel2)
		{
		case 1:
			weapon = Sword;
			break;
		case 2:
			weapon = Polearm;
			break;
		case 3:
			weapon = Catalyst;
			break;
		case 4:
			weapon = Claymore;
			break;
		case 5:
			weapon = Bow;
			break;
		}
		string weapon_name;
		cin.ignore();
		cout << "Enter weapon name\n>";
		getline(cin, weapon_name);
		m_active_characters[sel1]->SetWeaponType(weapon);
		m_active_characters[sel1]->SetWeaponName(weapon_name);
	}
	else cout << "You dont have active characters yet!" << endl;
}
/*-------------------------------------------------------------------------------*/
void Player::EvaluateTeam()
{
	if (!IsActiveCharactersEmpty())
	{
		string active_locations[MAX_ACTIVE_CHARACTERS];
		active_locations[0] = active_locations[1] = active_locations[2] = active_locations[3] = "";
		Element active_elements[MAX_ACTIVE_CHARACTERS];
		active_elements[0] = active_elements[1] = active_elements[2] = active_elements[3] = None_Element;
		for (int i = 0; i < MAX_ACTIVE_CHARACTERS; i++)
		{
			if (m_active_characters[i] != NULL)
			{
				m_active_characters[i]->Attack();
				active_locations[i] = m_active_characters[i]->getLocation();
				active_elements[i] = m_active_characters[i]->getType();
			}
		}
		EvaluateElements(active_elements);
		EvaluateLocations(active_locations);
	}
	else cout << "You dont have active characters yet!" << endl;
}
/*-------------------------------------------------------------------------------*/
ostream& operator << (ostream& out, Player& player)
{
	player.PrintActiveCharacters(out);
	return out;
}
/*-------------------------------------------------------------------------------*/
