#include "watertype.h"

// Constructor
WaterType::WaterType(std::string name, int hitPoints, int attack, int defense, int speed)
    : Pokemon(name, hitPoints, attack, defense, speed)
{
}

// Getters
bool WaterType::getFireResult() const
{
    return beatsFire;
}

bool WaterType::getGrassResult() const
{
    return beatsGrass;
}
