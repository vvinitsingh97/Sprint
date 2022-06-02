#include <cppunit/ui/text/TestRunner.h>
#include<cppunit/TestCaller.h>
#include <cppunit/extensions/HelperMacros.h>
#include<fstream>
#include<iostream>
#include "Testcase.h"
#include "calculator.h"
using namespace std;

int main(int argc,char* argv[])
{
	CppUnit::TextUi::TestRunner runner;
	runner.addTest(CalculatorTest::suite());
	runner.run();
	return 0;
}
