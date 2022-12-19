#pragma once
#include "Triad.h"
#include <errno.h>
#define PI 3.14159265   
class Triangle : public Triad
{
private:
	double* A;
	double* B;
	double* C;
	double* S;
	/*
	<����� ���������� ������������ ������������>
	@param double a
	@param double b
	@param double c
	@return bool
	*/
	bool isWell(double a, double b, double c);
	/*
	<����� ����������� ����� � �������>
	@param Triangle* this
	@return NULL
	*/
	void recalculation();
public:
	/*
	<�����������>
	@param Triangle* this
	@return NULL
	*/
	Triangle();
	/*
	<�����������>
	@param double a
	@param double b
	@param double c
	@return NULL
	*/
	Triangle(double a, double b, double c);
	/*
	<����������>
	@param Triangle* this
	@return NULL
	*/
	virtual ~Triangle();
	/*
	<����������� �����������>
	@param Triangle* this
	@param const Triangle& a - ������ ������, ������� ������������ ��� �������� �����
	@return NULL
	*/
	Triangle(const Triangle& tr);
	/*
	<������������� �������� ������������>
	@param Triangle* this
	@param Triangle tr -  ������, � �������� *this �������������
	@return Triangle&
	*/
	Triangle& operator=(Triangle tr);
	/*
	<������ ������� a>
	@param Triangle* this
	@param double a
	@return NULL
	*/
	void seta(double a);
	/*
	<������ ������� b>
	@param Triangle* this
	@param double b
	@return NULL
	*/
	void setb(double b);
	/*
	<������ ������� c>
	@param Triangle* this
	@param double c
	@return NULL
	*/
	void setc(double c);
	/*
	<������ ���� A>
	@param Triangle* this
	@return double A - ���� A
	*/
	double getA();
	/*
	<������ ���� B>
	@param Triangle* this
	@return double B - ���� B
	*/
	double getB();
	/*
	<������ ���� C>
	@param Triangle* this
	@return double C - ���� C
	*/
	double getC();
	/*
	<������ ������� S>
	@param Triangle* this
	@return double S - ������� S
	*/
	double getS();
	/*
	<�������������, ������������� �������� ������>
	@param ostream& out - �����, � ������� ������������ ������
	@param const Triangle& tr -  ������, ������� ������� ��������� �� �����
	@return ostream&
	*/
	friend ostream& operator<<(ostream& out, const Triangle& tr);
};