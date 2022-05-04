#include "Classes.h"


Circle::Circle()
{
	this->radius = 0.0;
}

Circle::Circle(const Circle& obj)
{
	this->radius = 0.0;
}

Circle::~Circle()
{
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::getRadius()
{
	return this->radius;
}

double Circle::area()
{
	return M_PI * this->radius * this->radius;
}

void Circle::printCircle()
{
	cout << "Side length:" << this->radius << endl << "Area: " << this->area() << endl;
}

Complex::Complex()
{
	this->im = 0.0;
	this->re = 0.0;
}

Complex::Complex(const Complex& obj)
{
	this->im = 0.0;
	this->re = 0.0;
}

Complex::~Complex()
{

}

Complex::Complex(double im, double re)
{
	this->im = im;
	this->re = re;
}

void Complex::printComplex()
{
	if (im < 0) {
		cout << this->re << this->im << "i" << endl;
	}
	else {
		cout << this->re << "+" << this->im << "i" << endl;
	}
}

Vektor::Vektor()
{
	this->x = 0.0;
	this->y = 0.0;
}

Vektor::Vektor(const Vektor& obj)
{
	this->x = 0.0;
	this->y = 0.0;
}

Vektor::~Vektor()
{
}

Vektor::Vektor(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Vektor::printVektor()
{
	cout << "x = " << this->x << endl << "y = " << this->y << endl;
}