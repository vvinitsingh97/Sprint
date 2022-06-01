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
		int small();	//return smallest of x and y
		int large();	//return largest of x and y
		int add();
		int sub();
		int logicalAND();
		int logicalOR();
		int logicalXOR();
};
#endif



