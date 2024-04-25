#ifndef _WATERTYPE_H_
#define _WATERTYPE_H_
#include "Pokemon.h"

class WaterType : public Pokemon
{
private:
    bool beatsFire = true;
    bool beatsGrass = false;
    // for later implementation:
    // bool beatsGround = true;
    // bool beatsRock = true;
public:
    // Constructor
    WaterType(std::string name = "MissingNo", int hitPoints = 0, int attack = 0, int defense = 0, int speed = 0);

    // Getters
    bool getFireResult() const;
    bool getGrassResult() const;
};

#endif // _WATERTYPE_H_
