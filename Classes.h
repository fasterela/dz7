#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>
#define M_PI 3.14
using namespace std;
class Complex {
private:
	double im, re;
public:
	Complex();
	Complex(const Complex &obj);
	~Complex();
	Complex(double im, double re);
	void printComplex();
};
class Circle
{
private:
	double radius;
public:
	Circle();
	Circle(const Circle &obj);
	~Circle();
	Circle(double radius);
	double getRadius();
	double area();
	void printCircle();
};

class Vektor
{
protected:
	double x;
	double y;
public:
	Vektor();
	Vektor(const Vektor &obj);
	~Vektor();
	Vektor(double x, double y);
	void printVektor();
};


#endif
