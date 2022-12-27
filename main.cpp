#include "Player.h"
#include "EpicCharacter.h"
#include "LegendaryCharacter.h"


int main()
{
    int choose = 0;
    while (true)
    {
        std::cout << "\n-----------MENU:-----------\n"
            << "\t1-Add new characters to data\n"
            << "\t2-Edit character weapon\n"
            << "\t3-Edit active team\n>"
            << "\t4-Evaluate team\n"
            << "\t5-Exit\n";
        std::cin >> choose;
        switch (choose)
        {
        case 1:
            return 0;
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            return 0;
            break;
        default:
            std::cout << "Please try again\n";
            break;
        }
    }
    return 0;
}