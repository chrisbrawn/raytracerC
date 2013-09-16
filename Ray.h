/*
 * Ray.h
 *
 *  Created on: Sep 15, 2013
 *      Author: chris
 */

#ifndef RAY_H_
#define RAY_H_
#include "Vector.h"
#include <stdio.h>

typedef struct ray {
	VEC3 startpos;
	VEC3 direction;
} RAY;

void printray(RAY);

#endif /* RAY_H_ */
