#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
	static Triangle* instance;

	Triangle(){}
	
public:
	static Triangle* getInstance();
	double perimeter(double a, double b, double c);
	double area(double a, double b, double c);
};

#endif // !TRIANGLE_H
