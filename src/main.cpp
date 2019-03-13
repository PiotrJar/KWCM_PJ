#pragma once
#include <iostream>
#define _USE_MATH_DEFINES

#include "PierwszyProgramConfig.h"
#ifdef USE_TRIGINOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <math.h>
#include <cmath>
#endif



int main() {
	

	#ifdef USE_TRIGINOMETRY_DEGREE
	double sin = degreemath::sin(0.0);
	double cos = degreemath::cos(0.0);
	double tg = degreemath::tg(0.0);
	double ctg = degreemath::ctg(0.0);
	#else
	double rsin=sin(M_PI/4);
	double rcos=cos(M_PI/4);
	double tg=tan(M_PI/4);
	double rctg=1/tan(M_PI/4);

#endif



	return 0;


	}