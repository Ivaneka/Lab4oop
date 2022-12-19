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
	<Конструктор>
	@param Triad* this
	@return NULL
	*/
	Triad();
	/*
	<Конструктор>
	@param double a
	@param double b
	@param double c
	@return NULL
	*/
	Triad(double a, double b, double c);
	/*
	<Деструктор>
	@param Triad* this
	@return NULL
	*/
	virtual ~Triad();
	/*
	<Конструктор копирования>
	@param Triad* this
	@param const Triad& a - объект класса, который используется для создания копии
	@return NULL
	*/
	Triad(const Triad& tr);
	/*
	<Сеттер a>
	@param Triad* this
	@param double a
	@return NULL
	*/
	void seta(double a);
	/*
	<Сеттер b>
	@param Triad* this
	@param double b
	@return NULL
	*/
	void setb(double b);
	/*
	<Сеттер c>
	@param Triad* this
	@param double c
	@return NULL
	*/
	void setc(double c);
	/*
	<Геттер a>
	@param Triad* this
	@return double a
	*/
	double geta();
	/*
	<Геттер b>
	@param Triad* this
	@return double b
	*/
	double getb();
	/*
	<Геттер c>
	@param Triad* this
	@return double c
	*/
	double getc();
	/*
	<Метод вычисление суммы>
	@param Triad* this
	@return double sum - сумма
	*/
	double sum();
	/*
	<Перегруженный оператор присваивания>
	@param Triad* this
	@param Triad tr -  объект, к которому *this присваивается
	@return Triad&
	*/
	Triad& operator=(Triad tr);
};