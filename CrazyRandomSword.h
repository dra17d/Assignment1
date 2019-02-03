/* 
 * File:   CrazyRandomSword.h
 * Author: Dominick Aiudi <dra17d@my.fsu.edu>
 * 
 * Created on February 3, 2019, 11:20 AM
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/*
 * Defines the behavior of a crazy random sword
 * hitpoint = random int (7 - 100)
 * armor ignore = random int (2 - 2/3s of armor value)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", 0.0)
    { 
    	// Calls Weapon(name, hitpoints) constructor with values:
    	// crazy random sword and 0.0
    	// base damage is irrelevant because its random
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */