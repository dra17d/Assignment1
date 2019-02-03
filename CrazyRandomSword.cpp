/* 
 * File:   CrazyRandomSword.cpp
 * Author: Dominick Aiudi <dra17d@my.fsu.edu>
 * 
 * Created on February 3, 2019, 11:20 AM
 */

#include <stdlib.h> // rand
#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) 
{
	double damage = rand() % 100 + 7;
	double armor_ignore = rand() % (0.66 * armor) + 2;

	armor -= armor_ignore;

	if (armor > 0)
		damage -= armor;

    if (damage < 0) 
        return 0;

    return floor(damage);
}