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
	<Метод вычисления допустимости треугольника>
	@param double a
	@param double b
	@param double c
	@return bool
	*/
	bool isWell(double a, double b, double c);
	/*
	<Метод перерасчёта углов и площади>
	@param Triangle* this
	@return NULL
	*/
	void recalculation();
public:
	/*
	<Конструктор>
	@param Triangle* this
	@return NULL
	*/
	Triangle();
	/*
	<Конструктор>
	@param double a
	@param double b
	@param double c
	@return NULL
	*/
	Triangle(double a, double b, double c);
	/*
	<Деструктор>
	@param Triangle* this
	@return NULL
	*/
	virtual ~Triangle();
	/*
	<Конструктор копирования>
	@param Triangle* this
	@param const Triangle& a - объект класса, который используется для создания копии
	@return NULL
	*/
	Triangle(const Triangle& tr);
	/*
	<Перегруженный оператор присваивания>
	@param Triangle* this
	@param Triangle tr -  объект, к которому *this присваивается
	@return Triangle&
	*/
	Triangle& operator=(Triangle tr);
	/*
	<Сеттер стороны a>
	@param Triangle* this
	@param double a
	@return NULL
	*/
	void seta(double a);
	/*
	<Сеттер стороны b>
	@param Triangle* this
	@param double b
	@return NULL
	*/
	void setb(double b);
	/*
	<Сеттер стороны c>
	@param Triangle* this
	@param double c
	@return NULL
	*/
	void setc(double c);
	/*
	<Геттер угла A>
	@param Triangle* this
	@return double A - угол A
	*/
	double getA();
	/*
	<Геттер угла B>
	@param Triangle* this
	@return double B - угол B
	*/
	double getB();
	/*
	<Геттер угла C>
	@param Triangle* this
	@return double C - угол C
	*/
	double getC();
	/*
	<Геттер площади S>
	@param Triangle* this
	@return double S - площадь S
	*/
	double getS();
	/*
	<Дружественный, перегруженный оператор вывода>
	@param ostream& out - поток, в который записываются данные
	@param const Triangle& tr -  объект, который который выводится на экран
	@return ostream&
	*/
	friend ostream& operator<<(ostream& out, const Triangle& tr);
};