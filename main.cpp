#include "pokemon.h"
#include "firetype.h"
#include "grasstype.h"
#include "watertype.h"
#include <iostream>
#include <stdexcept>

int main()
{

    // Ask the user to select a starter.
    int userChoice;
    std::cout << "Would you like to choose Charmander(1), Bulbasaur(2), or Squirtle(3)?\n";
    std::cin >> userChoice;

    // Display the user's choice.
    if (userChoice == 1)
    {
        FireType charmander("Charmander", 39, 52, 43, 65); // creates charmander object
        std::cout << "You chose Charmander!\n";
    }
    else if (userChoice == 2)
    {
        GrassType bulbasaur("Bulbasaur", 45, 49, 49, 45); // creates bulbasaur object
        std::cout << "You chose Bulbasaur!\n";            // madman
    }
    else if (userChoice == 3)
    {
        WaterType squirtle("Squirtle", 44, 48, 65, 43); // creates squirtle object
        std::cout << "You chose Squirtle!\n";
    }
    else
    {
        throw std::invalid_argument("Invalid choice.");
    }

    // Choose Rival's Pokemon
    int rivalChoice;
    if (userChoice == 1)
    {
        rivalChoice = 3; // Squirtle
    }
    else if (userChoice == 2)
    {
        rivalChoice = 1; // Charmander
    }
    else if (userChoice == 3)
    {
        rivalChoice = 2; // Bulbasaur
    }

    return 0;
}