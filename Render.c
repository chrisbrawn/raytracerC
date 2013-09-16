/*
 ============================================================================
 Name        : Render.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"
#include "Sphere.h"
#include "Ray.h"

int main(void) {

	VEC2 x={.x=1,.y=2};
	VEC2 y={.x=5,.y=3};
	VEC3 sp1center={.x=1,.y=1,.z=1};
	SPHERE sp1;
	sp1.center=sp1center;
	sp1.radius=1;

	RAY r;
	VEC3 raystart={1,.5,1};
	VEC3 raydirection={0,0,-1};
	r.direction=raydirection;
	r.startpos=raystart;

	SPHERESOL solution;
	solution=sphereraycollision(&sp1,&r);
	printf("%f-sol1 %f-sol2\n",solution.sol1,solution.sol2);

	float result;
	result=dotvec2(&x,&y);
	VEC2 result2;
	result2=addvec2(&x,&y);
	result2=scalarvec2(2.5,&x);



	VEC3 a={.x=1,.y=0,.z=0};
	VEC3 b={.x=0,.y=1,.z=0};
	VEC3 c;
	c=crossvec3(&a,&b);
	VEC3 d;
	d=basisvec3(&a);
	VEC3 fullbasis;
	fullbasis=crossvec3(&a,&d);
	printvec3(fullbasis,"full basis");


//	printf("%f cross \n",c); /* prints !!!Hello World!!! */
	printf("[%f,%f,%f] cross\n",c.x,c.y,c.z);
	printf("[%f,%f,%f] basis\n",d.x,d.y,d.z);
	printsphere(sp1);
	return EXIT_SUCCESS;
}
