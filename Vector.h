#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED


typedef struct vector2 {
	float x;
	float y;
} VEC2;

typedef struct vec3 {
	float x;
	float y;
	float z;
} VEC3;

typedef struct vec4 {
	float x;
	float y;
	float z;
	float w;
} VEC4;


VEC3 crossvec3(VEC3*,VEC3*);

VEC2 subvec2(VEC2*,VEC2*);
VEC3 subvec3(VEC3*,VEC3*);

VEC3 basisvec3(VEC3*);

VEC2 addvec2(VEC2*,VEC2*);
VEC3 addvec3(VEC3*,VEC3*);
VEC4 addvec4(VEC4*,VEC4*);

VEC2 scalarvec2(float,VEC2*);
VEC3 scalarvec3(float,VEC3*);
VEC4 scalarvec4(float,VEC4*);

float dotvec2(VEC2*,VEC2*);
float dotvec3(VEC3*,VEC3*);
float dotvec4(VEC4*,VEC4*);

float lengthvec2(VEC2*);
float lengthvec3(VEC3*);
float lengthvec4(VEC4*);

VEC2 unitvec2(VEC2*);
VEC3 unitvec3(VEC3*);

void printvec2(VEC2);
void printvec3(VEC3, char*);
void printvec4(VEC4);

#endif
