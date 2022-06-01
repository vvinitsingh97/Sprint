/*Filename	:	calculator.cpp
 *
 *This file contains all the function definitions which is declared in the calculator.h file
 *
 */


#include<iostream>
#include "calculator.h"
int a,b;


int Calculator::small()
{
	if(a<b)
	{
		return a;
	}
	else{
		return b;
	}
}

int Calculator::large()
{

	if(a>b)
	{
		return a;
	}
	else{
		return b;
	}

}

int Calculator::add()
{
	return a+b;
}

int Calculator::sub()
{
	return a-b;
}

int Calculator::logicalAND()
{
	return a&b;
}
int Calculator::logicalOR()
{
	return a|b;
}

int Calculator::logicalXOR()
{
	return a^b;
}


