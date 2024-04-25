#ifndef _GrassType_H_
#define _GrassType_H_
#include "Pokemon.h"

class GrassType : public Pokemon
{
private:
    bool beatsWater = true;
    bool beatsFire = false;
    // for later implementation:
    // bool beatsGround = true;
    // bool beatsRock = true;

public:
    GrassType(std::string name = "MissingNo", int hitPoints = 0, int attack = 0, int defense = 0, int speed = 0);

    // Getters
    bool getWaterResult() const;
    bool getFireResult() const;
};

#endif // _GrassType_H_