/* 
 * File:   SimpleHammer.cpp
 * Author: Dominick Aiudi <dra17d@my.fsu.edu>
 * 
 * Created on January 30, 2019, 11:50 PM
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) 
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