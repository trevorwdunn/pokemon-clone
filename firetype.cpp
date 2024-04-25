#include "firetype.h"

// Constructor
FireType::FireType(std::string name, int hitPoints, int attack, int defense, int speed)
    : Pokemon(name, hitPoints, attack, defense, speed)
{
}

// Getters
bool FireType::getGrassResult() const
{
    return beatsGrass;
}

bool FireType::getWaterResult() const
{
    return beatsWater;
}
