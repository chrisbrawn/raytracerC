/*
 * Sphere.c
 *
 *  Created on: Sep 15, 2013
 *      Author: chris
 */
#include "Sphere.h"

//return -1 if there is no collision between ray and sphere
//else return solutions to quadratic equation and the gradient and normal
//data for the points
SPHERESOL sphereraycollision(SPHERE* s,RAY* r)
{
	SPHERESOL answer;
	float a;
	a=dotvec3(&r->direction,&r->direction);
	printf("%f-collision a\n",a);

	float b;
	VEC3 b1;
	VEC3 b2;
	b1=scalarvec3(2.0,&r->direction);
	b2=subvec3(&r->startpos,&s->center);
	b=dotvec3(&b1,&b2);
	printf("%f-collision b\n",b);

	float c;
	c=dotvec3(&b2,&b2);
	c-=pow(s->radius,2);
	printf("%f-collision c\n",c);

	//check if discriminant is neg. if neg then no intersection
	float discriminant;
	discriminant=(pow(b,2)-(4*a*c));
	printf("%f-discriminant \n",discriminant);
	if (discriminant<0){
		answer.sol1=-1;
		answer.sol2=-1;
		return answer;
	}

	//solve quadratic equation to find solutions to ray/sphere intersection
	answer.sol1=(-b+(sqrt(discriminant)))/(2*a);
	answer.sol2=(-b-(sqrt(discriminant)))/(2*a);



	return answer;
}

void printsphere(SPHERE s)
{
	printf("[%f,%f,%f]-center %f-radius\n",s.center.x,s.center.y,s.center.z,s.radius);
}


