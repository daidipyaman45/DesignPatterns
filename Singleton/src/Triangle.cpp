#include <math.h>
#include "..\header\Triangle.h"

Triangle* Triangle::instance = NULL;

Triangle* Triangle::getInstance() {
	if (instance == NULL) {
		instance = new Triangle();
		return instance;
	}
	else {
		return instance;
	}
}

double Triangle::perimeter(double a, double b, double c) {
	return a + b + c;
}

double Triangle::area(double a, double b, double c) {
	double s = (a + b + c) / 2;
	double area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}