#pragma once
#include <iostream> 
using namespace std;
class Triad
{
protected:
	double* a;
	double* b;
	double* c;
public:
	/*
	<�����������>
	@param Triad* this
	@return NULL
	*/
	Triad();
	/*
	<�����������>
	@param double a
	@param double b
	@param double c
	@return NULL
	*/
	Triad(double a, double b, double c);
	/*
	<����������>
	@param Triad* this
	@return NULL
	*/
	virtual ~Triad();
	/*
	<����������� �����������>
	@param Triad* this
	@param const Triad& a - ������ ������, ������� ������������ ��� �������� �����
	@return NULL
	*/
	Triad(const Triad& tr);
	/*
	<������ a>
	@param Triad* this
	@param double a
	@return NULL
	*/
	void seta(double a);
	/*
	<������ b>
	@param Triad* this
	@param double b
	@return NULL
	*/
	void setb(double b);
	/*
	<������ c>
	@param Triad* this
	@param double c
	@return NULL
	*/
	void setc(double c);
	/*
	<������ a>
	@param Triad* this
	@return double a
	*/
	double geta();
	/*
	<������ b>
	@param Triad* this
	@return double b
	*/
	double getb();
	/*
	<������ c>
	@param Triad* this
	@return double c
	*/
	double getc();
	/*
	<����� ���������� �����>
	@param Triad* this
	@return double sum - �����
	*/
	double sum();
	/*
	<������������� �������� ������������>
	@param Triad* this
	@param Triad tr -  ������, � �������� *this �������������
	@return Triad&
	*/
	Triad& operator=(Triad tr);
};