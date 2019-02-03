/* 
 * File:   CustomWeapon.cpp
 * Author: Dominick Aiudi <dra17d@my.fsu.edu>
 * 
 * Created on February 3, 2019, 12:13 PM
 */

#include <math.h>
#include "CustomWeapon.h"

double CustomWeapon::hit(double armor) 
{
	double damage = hitPoints;
	// if armor >= 20, increase armor point reduction
	if (armor >= 20.0)
	{
		armor += (armor * .5); // increase by 50%
		damage -= armor;
	}

    if (damage < 0) 
    {
        return 0;
    }

    return floor(damage);
}