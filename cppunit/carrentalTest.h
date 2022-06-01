#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#include "car.h"
#include "rentals.h"
#include "customer.h"
#include "date.h"

using namespace std;

class CarTest : public CppUnit::TestFixture
{
	public:
		void CarDataAdd()
		{
			Car car1;
			string reg_no="BR29EZ7762";
			string company1="Hyundai";
			string model1="2017";
			double cost_per_day=1500;
			CPPUNIT_ASSERT_EQUAL(save(car1),true);
		}

		CPPUNIT_TEST_SUITE(CarTest);
		CPPUNIT_TEST(CarDataAdd);
		CPPUNIT_TEST_SUITE_END();
};


