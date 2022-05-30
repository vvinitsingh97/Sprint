#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../src/car.h"
#include "../src/rentals.h"
#include "../src/customer.h"
#include "../src/date.h"
#include "carrentalTest.h"

using namespace std;
int main(int argc,char* argv[])
{
	CppUnit::TextUi::TestRunner runner;
	runner.addTest(CarTest::suite());
	runner.run();
	return 0;
}
