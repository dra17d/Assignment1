/* 
 * File:   CrazyRandomSword.cpp
 * Author: Dominick Aiudi <dra17d@my.fsu.edu>
 * 
 * Created on February 3, 2019, 11:20 AM
 */

#include <math.h> // floor
#include <stdlib.h> // rand & srand
#include <time.h> // time used with srand
#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) 
{
	srand(time(NULL)); // "random" seed based on time

	double damage = hitPoints;

	double armor_ignore = rand() % int(0.66 * armor) + 2;

	armor -= armor_ignore;

	if (armor > 0)
		damage -= armor;

    if (damage < 0) 
        return 0;

    return damage;
}