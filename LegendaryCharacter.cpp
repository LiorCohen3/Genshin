#include "LegendaryCharacter.h"

/*-------------------------------------------------------------------------------*/
void LegendaryCharacter::Attack()
{
	Character::Attack();
	cout << getName() << " has Signature Weapon equipped! Double Damage!" << endl;
}