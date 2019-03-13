#include "trygonometria.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

double degreemath::sin(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
	double radian = degree *M_PI/180;
return std::sin(radian); //funkcja biblioteczna z piku <cmath>
}
//i tak dalej
double degreemath::cos(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
//return std::cos(); //funkcja biblioteczna z piku <cmath>
	double radian = degree *M_PI/180;
return std::cos(radian); //funkcja biblioteczna z piku <cmath>
}


double degreemath::tg(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
//return std::tg(); //funkcja biblioteczna z piku <cmath>
	double radian = degree *M_PI/180;
	return std::tan(radian); //funkcja biblioteczna z piku <cmath>
}

double degreemath::ctg(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
//return std::ctg(); //funkcja biblioteczna z piku <cmath>
	double radian = degree *M_PI/180;
	return std::tan(radian); //funkcja biblioteczna z piku <cmath>
}