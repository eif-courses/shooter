//
// Created by Marius on 5/22/2023.
//

#ifndef SHOOTER_PLAYER_H
#define SHOOTER_PLAYER_H


#include "Weapon.h"
#include "Invetory.h"

class Player {
private:
    int x, y;
    int hp; // health points
    int experience;
    int score;
    int killCount;
    Weapon weapon;
    Invetory invetory;

public:
    void Shoot();



};


#endif //SHOOTER_PLAYER_H
