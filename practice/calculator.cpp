/*Filename	:	calculator.cpp
 *
 *This file contains all the function definitions which is declared in the calculator.h file
 *
 */


#include<iostream>
#include "calculator.h"


int Calculator::small(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else{
		return b;
	}
}

int Calculator::large(int a,int b)
{

	if(a>b)
	{
		return a;
	}
	else{
		return b;
	}

}

int Calculator::add(int a,int b)
{
	return a+b;
}

int Calculator::sub(int a,int b)
{
	return a-b;
}

int Calculator::logicalAND(int a,int b)
{
	return a&b;
}
int Calculator::logicalOR(int a,int b)
{
	return a|b;
}

int Calculator::logicalXOR(int a,int b)
{
	return a^b;
}

