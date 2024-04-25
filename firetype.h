#ifndef _FIRETYPE_H_
#define _FIRETYPE_H_
#include "Pokemon.h"

class FireType : public Pokemon
{
private:
    bool beatsGrass = true;
    bool beatsWater = false;
    // for later implementation:
    // bool beatsIce = true;
    // bool beatsBug = true;
    // bool beatsSteel = true;
    // bool beatsFairy = true; // Is this true?

public:
    FireType(std::string name = "MissingNo", int hitPoints = 0, int attack = 0, int defense = 0, int speed = 0);

    // Getters
    bool getGrassResult() const;
    bool getWaterResult() const;
};

#endif // _FIRETYPE_H_