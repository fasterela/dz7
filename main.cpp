#include "Classes.h"

int main() {
	Complex* c;
	Complex C(-13.0, 2.5);
	c = &C;

	Circle* k;
	Circle A(4.5);
	k = &A;

	Vektor* v;
	Vektor V(3.6, 10.0);
	v = &V;

	k->printCircle();
	c->printComplex();
	v->printVektor();


}
