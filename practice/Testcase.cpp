#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#include "Testcase.h"
using namespace std;
int main(int argc,char* argv[])
{
	CppUnit::TextUi::TestRunner runner;
	runner.addTest(CalculatorTest::suite());
	runner.run();
	return 0;
}
