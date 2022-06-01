#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

using namespace std;

class CalculatorTest : public CppUnit::TestFixture
{
		public:
			void FindSmall()
			{
				Calculator obj1;
				//int k = obj1.small(10,20);
				//CPPUNIT_ASSERT_EQUAL(10, k);
				CPPUNIT_ASSERT(20 == small(20,22));
				CPPUNIT_ASSERT(7 == small(-7,7));
				CPPUNIT_ASSERT(0 == small(0,0));
				CPPUNIT_ASSERT(20 == small(60,20));
			}
			void Findlarge()
			{
				CPPUNIT_ASSERT(20 == large(10,20));
				CPPUNIT_ASSERT(450 == large(450,344));
				CPPUNIT_ASSERT(345 == large(345,288));
			}

			void TestAdd()
			{
				CPPUNIT_ASSERT(30 == add(10,20));
				CPPUNIT_ASSERT(40 == add(20,20));
				CPPUNIT_ASSERT(0 == add(0,0));
				CPPUNIT_ASSERT(300 == add(-100,-200));
			}

			void TestSub()
			{
				CPPUNIT_ASSERT(100 == sub(200,100));
				CPPUNIT_ASSERT(0 == sub(0,0));
				CPPUNIT_ASSERT(-10 == sub(10,20));
			}
			void LogicalAnd()
			{
				CPPUNIT_ASSERT(0 == logicalAND(10,20));
				CPPUNIT_ASSERT(20 == logicalAND(20,20));
				CPPUNIT_ASSERT(20 == logicalAND(30,20));
				CPPUNIT_ASSERT(-28 == logicalAND(-10,-20));
			}

			void LogicalOr()
			{
				CPPUNIT_ASSERT(30 == logicalOR(10,20));
				CPPUNIT_ASSERT(20 == logicalOR(20,20));
				CPPUNIT_ASSERT(18 == logicalOR(-30,-20));
			}
			void LogicalXor()
			{
				CPPUNIT_ASSERT(30 == logicalXOR(10,20));
				CPPUNIT_ASSERT(0 == logicalXOR(20,20));
				CPPUNIT_ASSERT(-14 == logicalXOR(-30,-20));
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


