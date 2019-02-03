/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *
 * Edited by: Dominick Aiudi <dra17d@my.fsu.edu>
 *
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleHammer.h"
#include "CrazyRandomSword.h"
#include "CustomWeapon.h"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }

    if (name.compare("hammer") == 0)
    {
        return new SimpleHammer();
    }

    if (name.compare("random") == 0)
    {
        return new CrazyRandomSword();
    }

    if (name.compare("custom") == 0)
    {
        return new CustomWeapon();
    }

    throw "Invalid weapon";
}