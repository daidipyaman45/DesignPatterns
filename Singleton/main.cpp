#include <iostream>
#include "header/Triangle.h"

using namespace std;

int main() {
	Triangle* t1 = Triangle::getInstance();
	double a, b, c;

	cout << "Enter sides of triangle: ";
	cin >> a >> b >> c;

	double perimeter = t1->perimeter(a, b, c);
	double area = t1->area(a, b, c);
	cout << "Preimeter: " << perimeter << "\nArea: " << area << endl;

	Triangle* t2 = Triangle::getInstance();

	t1 == t2 ? cout << "Same" : cout << "Different";

	return 0;
}