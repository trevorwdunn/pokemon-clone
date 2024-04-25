#include "grasstype.h"

// Constructor
GrassType::GrassType(std::string name, int hitPoints, int attack, int defense, int speed)
    : Pokemon(name, hitPoints, attack, defense, speed)
{
}

// Getters
bool GrassType::getWaterResult() const
{
    return beatsWater;
}

bool GrassType::getFireResult() const
{
    return beatsFire;
}
