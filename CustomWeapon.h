/* 
 * File:   CustomWeapon.h
 * Author: Dominick Aiudi <dra17d@my.fsu.edu>
 * 
 * Created on February 3, 2019, 12:14 PM
 */

#include <string>
#include "Weapon.h"

#ifndef CUSTOMWEAPON_H
#define CUSTOMWEAPON_H

/**
 * Defines the behavior of a delicate blade 
 * hitpoint = 80
 * if armor > 20 then armor is increased by 50%
 */
class CustomWeapon : public Weapon {
public:

    CustomWeapon() : Weapon("Delicate blade", 80.0)
    {
    	// Calls Weapon(name, hitpoints) constructor with values Delicate blade and 80.0
    }

    virtual ~CustomWeapon() {};

    virtual double hit(double armor);

};

#endif /* CUSTOMWEAPON_H */