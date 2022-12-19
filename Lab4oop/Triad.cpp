#include "Triad.h"
Triad::Triad() {
	a = new double(0);
	b = new double(0);
	c = new double(0);
}
Triad::Triad(double a, double b, double c) {
	this->a = new double(a);
	this->b = new double(b);
	this->c = new double(c);
}
Triad::~Triad() {
	delete a;
	delete b;
	delete c;
}
Triad::Triad(const Triad& tr) {
	a = new double(*tr.a);
	b = new double(*tr.b);
	c = new double(*tr.c);
}
void Triad::seta(double a) {
	this->a = new double(a);
}
void Triad::setb(double b) {
	this->b = new double(b);
}
void Triad::setc(double c) {
	this->c = new double(c);
}
double Triad::geta() {
	return *a;
}
double Triad::getb() {
	return *b;
}
double Triad::getc() {
	return *c;
}
double Triad::sum() {
	return geta() + getb() + getc();
}
Triad& Triad::operator=(Triad tr) {
	*a = *tr.a;
	*b = *tr.b;
	*c = *tr.c;
	return *this;
}
