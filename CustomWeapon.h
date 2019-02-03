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
 * Defines the behavior of a simple hammer (hitpoint = 40, ignores 20% of 
 * armor points)
 */
class CustomWeapon : public Weapon {
public:

    CustomWeapon() : Weapon("Simple hammer", 25.0)
    {
    	// Calls Weapon(name, hitpoints) constructor with values Simple Hammmer and 25.0
    }

    virtual ~CustomWeapon() {};

    virtual double hit(double armor);

};

#endif /* CUSTOMWEAPON_H */