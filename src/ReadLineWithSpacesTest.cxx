/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_ReadLineWithSpacesTest_init = false;
#include "/var/www/html/codeit/workspace/ReadLineWithSpaces/src/ReadLineWithSpacesTest.h"

static ReadLineWithSpacesTest suite_ReadLineWithSpacesTest;

static CxxTest::List Tests_ReadLineWithSpacesTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ReadLineWithSpacesTest( "/var/www/html/codeit/workspace/ReadLineWithSpaces/src/ReadLineWithSpacesTest.h", 5, "ReadLineWithSpacesTest", suite_ReadLineWithSpacesTest, Tests_ReadLineWithSpacesTest );

static class TestDescription_suite_ReadLineWithSpacesTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ReadLineWithSpacesTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_ReadLineWithSpacesTest, suiteDescription_ReadLineWithSpacesTest, 15, "test_Unit_Test_1" ) {}
 void runTest() { suite_ReadLineWithSpacesTest.test_Unit_Test_1(); }
} testDescription_suite_ReadLineWithSpacesTest_test_Unit_Test_1;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
