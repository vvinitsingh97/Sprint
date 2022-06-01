/*Filename	:	calculator.cpp
 *
 *This file contains all the function definitions which is declared in the calculator.h file
 *
 */


#include<iostream>
#include "calculator.h"
int a,b;


int small()
{
	if(a<b)
	{
		return a;
	}
	else{
		return b;
	}
}

int large()
{

	if(a>b)
	{
		return a;
	}
	else{
		return b;
	}

}

int add()
{
	return a+b;
}

int sub()
{
	return a-b;
}

int logicalAND()
{
	return a&b;
}
int logicalOR()
{
	return a|b;
}

int logicalXOR()
{
	return a^b;
}


