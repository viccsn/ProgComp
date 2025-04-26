#include <iostream>
#include <cmath>
#include "qEquation.h"


float qEquat(float a, float b, float c) {
	float delta = pow(-b, 2) - 4 * a * c;
	float x1 = 0;
	float x2 = 0;

	if (delta > 0) {
		x1 = (-b + sqrt(delta) ) / (2 * a);
		x2 = (-b - sqrt(delta) ) / (2 * a);
		std::cout << "X1 = " << x1 << std::endl;
		std::cout << "X2 = " << x2 << std::endl;
		return x1;
	}
	else if (delta == 0) {
		x1 = (-b + sqrt(delta) ) / (2 * a);
		std::cout << "X = " << x1 << std::endl;
		return x1;
	}
	else {
		std::cout << "Nao ha raizes reais";
		return NAN;
	}
}