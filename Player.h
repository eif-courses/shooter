//
// Created by Marius on 5/22/2023.
//

#ifndef SHOOTER_PLAYER_H
#define SHOOTER_PLAYER_H


#include "Weapon.h"

class Player {
private:
    int x, y;
    int hp; // health points
    int experience;
    int killCount;
    Weapon weapon;
public:
    void Shoot();



};


#endif //SHOOTER_PLAYER_H
