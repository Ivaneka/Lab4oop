#include "Triangle.h"

Triangle::Triangle() :Triad() {
	A = new double(0);
	B = new double(0);
	C = new double(0);
	S = new double(0);
}
Triangle::Triangle(double a, double b, double c) :Triad(a, b, c) {
	if (isWell(a, b, c)) {
		recalculation();
	}
	else {
		*this->a = 0;
		*this->b = 0;
		*this->c = 0;
		A = new double(0);
		B = new double(0);
		C = new double(0);
		S = new double(0);
	}
}
Triangle::Triangle(const Triangle& tr) :Triad(tr) {
	A = new double(*tr.A);
	B = new double(*tr.B);
	C = new double(*tr.C);
	S = new double(*tr.S);
}

Triangle::~Triangle() {
	delete A;
	delete B;
	delete C;
	delete S;
}
Triangle& Triangle::operator=(Triangle tr) {
	*a = *tr.a;
	*b = *tr.b;
	*c = *tr.c;
	*A = *tr.A;
	*B = *tr.B;
	*C = *tr.C;
	*S = *tr.S;
	return *this;
}
void Triangle::seta(double a) {
	if (isWell(a, getb(), getc())) {
		this->a = new double(a);
		recalculation();
	}
}
void Triangle::setb(double b) {
	if (isWell(geta(), b, getc())) {
		this->b = new double(b);
		recalculation();
	}
}
void Triangle::setc(double c) {
	if (isWell(geta(), getb(), c)) {
		this->c = new double(c);
		recalculation();
	}
}
double Triangle::getA() {
	return *A;
}
double Triangle::getB() {
	return *B;
}
double Triangle::getC() {
	return *C;
}
double Triangle::getS() {
	return *S;
}
ostream& operator<<(ostream& out, const Triangle& tr) {
	out << "a=" << *tr.a << " b=" << *tr.b << " c="
		<< *tr.c << " A=" << *tr.A << " B=" << *tr.B << " C=" << *tr.C << " S=" << *tr.S << '\n';
	return out;
}

void Triangle::recalculation() {
	A = new double(acos((getb() * getb() + getc() * getc() - geta() * geta()) / (2 * getb() * getc())) * 180.0 / PI);
	B = new double(acos((geta() * geta() + getc() * getc() - getb() * getb()) / (2 * geta() * getc())) * 180.0 / PI);
	C = new double(acos((getb() * getb() + geta() * geta() - getc() * getc()) / (2 * getb() * geta())) * 180.0 / PI);
	S = new double(sqrt((sum() / 2) *
		(sum() / 2 - geta()) * (sum() / 2 - getb())
		* (sum() / 2 - getc())));
}

bool Triangle::isWell(double a, double b, double c) {
	errno = 0;
	if (a + b < c || b + c < a || a + c < b) {
		errno = EINVAL;
#pragma warning(suppress : 4996)
		cout << "Assignment failed: " << strerror(errno) << '\n';
		return false;
	}

}