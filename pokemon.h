#ifndef _POKEMON_H
#define _POKEMON_H
#include <string>

class Pokemon
{
protected:
    int dexNumber;
    std::string name;
    int hitPoints;
    int attack;
    int defense;
    int speed;

public:
    // Constructor
    Pokemon(std::string name = "MissingNo", int hitPoints = 0, int attack = 0, int defense = 0, int speed = 0);

    // Getters
    int getDexNumber() const;
    std::string getName() const;
    int getHitPoints() const;
    int getAttack() const;
    int getDefense() const;
    int getSpeed() const;

    // Setters
    int setDexNumber(int dexNumber);
    std::string setName(std::string name);
    int setHitPoints(int hitPoints);
    int setAttack(int attack);
    int setDefense(int defense);
    int setSpeed(int speed);
};

#endif // _POKEMON_H