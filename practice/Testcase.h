#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#include "calculator.h"
using namespace std;

class CalculatorTest : public CppUnit::TestFixture
{
		public:
			void FindSmall()
			{
				Calculator obj;
				CPPUNIT_ASSERT_EQUAL(obj.small(20,22),20);
				CPPUNIT_ASSERT_EQUAL(obj.small(-7,7),-7);
				CPPUNIT_ASSERT_EQUAL(obj.small(0,0),0);
				CPPUNIT_ASSERT_EQUAL(obj.small(60,20),20);
			}
			void Findlarge()
			{
				Calculator obj;
				CPPUNIT_ASSERT_EQUAL(obj.large(10,20),20);
				CPPUNIT_ASSERT_EQUAL(obj.large(450,344),450);
				CPPUNIT_ASSERT_EQUAL(obj.large(345,288),345);
			}

			void TestAdd()
			{
				Calculator obj;
				CPPUNIT_ASSERT_EQUAL(obj.add(10,20),30);
				CPPUNIT_ASSERT_EQUAL(obj.add(20,20),40);
				CPPUNIT_ASSERT_EQUAL(obj.add(0,0),0);
				CPPUNIT_ASSERT_EQUAL(obj.add(-100,-200),-300);
			}

			void TestSub()
			{
				Calculator obj;
				CPPUNIT_ASSERT_EQUAL(obj.sub(200,100),100);
				CPPUNIT_ASSERT_EQUAL(obj.sub(0,0),0);
				CPPUNIT_ASSERT_EQUAL(obj.sub(10,20),-10);
			}
			void LogicalAnd()
			{
				Calculator obj;
				CPPUNIT_ASSERT_EQUAL(obj.logicalAND(10,20),0);
				CPPUNIT_ASSERT_EQUAL(obj.logicalAND(20,20),20);
				CPPUNIT_ASSERT_EQUAL(obj.logicalAND(30,20),20);
				CPPUNIT_ASSERT_EQUAL(obj.logicalAND(-10,-20),-28);
			}

			void LogicalOr()
			{
				Calculator obj;
				CPPUNIT_ASSERT_EQUAL(obj.logicalOR(10,20),30);
				CPPUNIT_ASSERT_EQUAL(obj.logicalOR(20,20),20);
				CPPUNIT_ASSERT_EQUAL(obj.logicalOR(-30,-20),-18);
			}
			void LogicalXor()
			{
				Calculator obj;
				CPPUNIT_ASSERT_EQUAL(obj.logicalXOR(10,20),30);
				CPPUNIT_ASSERT_EQUAL(obj.logicalXOR(20,20),0);
				CPPUNIT_ASSERT_EQUAL(obj.logicalXOR(-30,-20),14);
			}

			CPPUNIT_TEST_SUITE(CalculatorTest);
			CPPUNIT_TEST(FindSmall);
			CPPUNIT_TEST(Findlarge);
			CPPUNIT_TEST(TestAdd);
			CPPUNIT_TEST(TestSub);
			CPPUNIT_TEST(LogicalAnd);
			CPPUNIT_TEST(LogicalOr);
			CPPUNIT_TEST(LogicalXor);
			CPPUNIT_TEST_SUITE_END();
};


