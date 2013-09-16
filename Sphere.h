/*
 * Sphere.h
 *
 *  Created on: Sep 15, 2013
 *      Author: chris
 */

#ifndef SPHERE_H_
#define SPHERE_H_

#include "Vector.h"
#include "Ray.h"
#include <math.h>
#include <stdio.h>

typedef struct sphere{
	VEC3 center;
	float radius;
} SPHERE;

//return ray-sphere solutions
typedef struct spc {
	float sol1;
	float sol2;
	VEC3 normal1;
	VEC3 normal2;
	VEC3 unitnormal1;
	VEC3 unitnormal2;
} SPHERESOL;


void printsphere(SPHERE s);

SPHERESOL sphereraycollision(SPHERE* s,RAY* r);



#endif /* SPHERE_H_ */
