#include <memory>
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestResult.h>
#include <cppunit/ui/text/TestRunner.h>
#include "complex.hpp"

using namespace std;

class TestComplexNumber : public CppUnit::TestFixture {
private:	
	shared_ptr<Complex> num1, num2, num3, num4, num5;

public:
	static CppUnit::Test *suite()
	{
		CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite( "TestComplexNumber" );
		suiteOfTests->addTest( new CppUnit::TestCaller<TestComplexNumber>( 
				           "testConstructor", 
				           &TestComplexNumber::testConstructor ) );
		suiteOfTests->addTest( new CppUnit::TestCaller<TestComplexNumber>(
				           "testAddition",
				           &TestComplexNumber::testAddition ) );
		suiteOfTests->addTest( new CppUnit::TestCaller<TestComplexNumber>(
				           "testSubtraction",
				           &TestComplexNumber::testSubtraction ) );
		suiteOfTests->addTest( new CppUnit::TestCaller<TestComplexNumber>(
				           "testSetters",
				           &TestComplexNumber::testSetters ) );
		return suiteOfTests;
	}

	void setUp() {
		num1 = shared_ptr<Complex>(new Complex(1,3));	
		num2 = shared_ptr<Complex>(new Complex(1,4));
		num3 = shared_ptr<Complex>(new Complex(4,-3));	
		num4 = shared_ptr<Complex>(new Complex(2,5));
		num5 = shared_ptr<Complex>(new Complex());
	}

	void tearDown() {}

	void testConstructor() {
		CPPUNIT_ASSERT((*num1).getReal()==1);
		CPPUNIT_ASSERT((*num2).getReal()==1);
		CPPUNIT_ASSERT((*num3).getReal()==4);
		CPPUNIT_ASSERT((*num4).getReal()==2);
		CPPUNIT_ASSERT((*num1).getImag()==3);
		CPPUNIT_ASSERT((*num2).getImag()==4);
		CPPUNIT_ASSERT((*num3).getImag()==-3);
		CPPUNIT_ASSERT((*num4).getImag()==5);
	}

	void testAddition() {
		*num5 = *num1 + *num2;
		CPPUNIT_ASSERT((*num5).getReal() == 2);
		CPPUNIT_ASSERT((*num5).getImag() == 7);
	}

	void testSubtraction() {
		*num5 = *num3 - *num4;
		CPPUNIT_ASSERT((*num5).getReal() == 2);
		CPPUNIT_ASSERT((*num5).getImag() == -8);
	}

	void testSetters() {
		(*num5).setReal(0);
		(*num5).setImag(0);
		CPPUNIT_ASSERT((*num5).getReal() == 0);
		CPPUNIT_ASSERT((*num5).getImag() == 0);
	}

};

int main() {

	CppUnit::TextUi::TestRunner runner;
	runner.addTest( TestComplexNumber::suite() );
	bool wasSuccessful = runner.run( "", false );
  	return !wasSuccessful;
}
/*
int main() {

	CppUnit::TestSuite suite;
	CppUnit::TestResult result;
	suite.addTest( TestComplexNumber::suite() );
	suite.run( &result );
	return 0;

}*/