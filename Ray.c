/*
 * Ray.c
 *
 *  Created on: Sep 15, 2013
 *      Author: chris
 */
#include "Ray.h"

void printray(RAY r)
{
	printf("[%f,%f,%f]-startpos [%f,%f,%f]-direction\n",r.direction.x,r.direction.y,r.direction.z,r.startpos.x,r.startpos.y,r.startpos.z);
}
