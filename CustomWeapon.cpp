/* 
 * File:   CustomWeapon.cpp
 * Author: Dominick Aiudi <dra17d@my.fsu.edu>
 * 
 * Created on February 3, 2019, 12:13 PM
 */

#include "CustomWeapon.h"

double CustomWeapon::hit(double armor) 
{
	double damage = hitPoints;
	// if armor > 30, apply armor point reduction
	if (armor > 30.0)
	{
		damage -= armor;
	}

    if (damage < 0) 
    {
        return 0;
    }

    return damage;
}