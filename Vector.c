/*
 * Vector
 *
 *  Created on: Sep 13, 2013
 *      Author: chris
 */
#include "Vector.h"
#include <math.h>
#include <stdio.h>

VEC2 unitvec2(VEC2* a)
{
	VEC2 w;
	float length=lengthvec2(a);
	w.x=a->x/length;
	w.y=a->y/length;
	return w;
}

VEC3 unitvec3(VEC3* a)
{
	VEC3 w;
	float length=lengthvec3(a);
	w.x=a->x/length;
	w.y=a->y/length;
	w.z=a->z/length;
	return w;
}

//builds an orthogonal basis vector to the input vector
VEC3 basisvec3(VEC3 *a)
{
	VEC3 w;
	w=unitvec3(a);
	VEC3 t;
	t.x=w.x;
	t.y=w.y;
	t.z=w.z;
	printvec3(t,"t before");
	if (t.x < t.y && t.x < t.z)
		t.x=1;
	else if (t.y <= t.x && t.y <= t.z)
		t.y=1;
	else if (t.z <= t.x && t.z <= t.y)
		t.z=1;
	VEC3 crossproduct;
	VEC3 u;
	float lengthTXW;
	crossproduct=crossvec3(&t,&w);
	lengthTXW=lengthvec3(&crossproduct);
	u.x=crossproduct.x/lengthTXW;
	u.y=crossproduct.y/lengthTXW;
	u.z=crossproduct.z/lengthTXW;
	VEC3 v;
	v=crossvec3(&w,&u);
	return v;
}

//subtract b from a
VEC3 subvec3(VEC3* a,VEC3* b)
{
	VEC3 diff;
	diff.x=a->x-b->x;
	diff.y=a->y-b->y;
	diff.z=a->z-b->z;
	return diff;
}

VEC3 crossvec3(VEC3* a,VEC3* b)
{
	VEC3 product;
	product.x=(a->y*b->z)-(a->z*b->y);
	product.y=(a->z*b->x)-(a->x*b->z);
	product.z=(a->x*b->y)-(a->y*b->x);
	return product;
}

float dotvec2(VEC2* a,VEC2* b)
{
	return ((a->x*b->x)+(a->y*b->y));
}

float dotvec3(VEC3* a,VEC3* b)
{
	return ((a->x*b->x)+(a->y*b->y)+(a->z*b->z));
}

float dotvec4(VEC4* a,VEC4* b)
{
	return ((a->x*b->x)+(a->y*b->y)+(a->z*b->z)+(a->w*b->w));
}

VEC2 addvec2(VEC2* a,VEC2* b)
{
	VEC2 sum;
	sum.x=a->x+b->x;
	sum.y=a->y+b->y;
	return sum;
}

VEC3 addvec3(VEC3* a,VEC3* b)
{
	VEC3 sum;
	sum.x=a->x+b->x;
	sum.y=a->y+b->y;
	sum.z=a->z+b->z;
	return sum;
}

VEC4 addvec4(VEC4* a,VEC4* b)
{
	VEC4 sum;
	sum.x=a->x+b->x;
	sum.y=a->y+b->y;
	sum.z=a->z+b->z;
	sum.w=a->w+b->w;
	return sum;
}

VEC2 scalarvec2(float scalar,VEC2* a)
{
	VEC2 scaled;
	scaled.x=(scalar*a->x);
	scaled.y=(scalar*a->y);
	return scaled;
}

VEC3 scalarvec3(float scalar,VEC3* a)
{
	VEC3 scaled;
	scaled.x=(scalar*a->x);
	scaled.y=(scalar*a->y);
	scaled.z=(scalar*a->z);
	return scaled;
}
VEC4 scalarvec4(float scalar,VEC4* a)
{
	VEC4 scaled;
	scaled.x=(scalar*a->x);
	scaled.y=(scalar*a->y);
	scaled.z=(scalar*a->z);
	scaled.w=(scalar*a->w);
	return scaled;
}

float lengthvec2(VEC2* a)
{
	return (sqrt(pow(a->x,2)+pow(a->y,2)));
}

float lengthvec3(VEC3* a)
{
	return (sqrt(pow(a->x,2)+pow(a->y,2)+pow(a->z,2)));
}
float lengthvec4(VEC4* a)
{
	return (sqrt(pow(a->x,2)+pow(a->y,2)+pow(a->z,2)+pow(a->w,2)));
}

void printvec3(VEC3 a,char *b)
{
	printf("[%f,%f,%f] %s\n",a.x,a.y,a.z,b);
}
