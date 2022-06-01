/*Filename	:	Calculator.h
*	This file contains the functiones declarations for a simple calculator*/

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<iostream>

class Calculator{
	private:
		int x, y;

	public:
		int getX();
		void setX(int value);

		int getY();
		void setY(int value);
		int small(int, int);	//return smallest of x and y
		int large(int, int);	//return largest of x and y
		int add(int, int);
		int sub(int, int);
		int logicalAND(int, int);
		int logicalOR(int, int);
		int logicalXOR(int, int);
};
#endif



