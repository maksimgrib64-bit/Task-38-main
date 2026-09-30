#include "test.h"
void test(int number, bool expected, string test_name) {
	bool actual = get_palindrome_number(number);
	string msg;
	if (actual == expected) {
		msg = "Pass";
	}
	else {
		msg = "Fail";
	}
	cout <<test_name<<"-->"<< msg << endl;
}
void run_all_tests() {
	test(12345,false , "test01");
	test(123321,false, "test02");
	test(121,true , "test03");
	test(777,true , "test04");
	test(1,true , "test05");
	test(0,false , "test06");
	test(100,false , "test07");
	test(12,false , "test08");
	test(-121,false , "test09");
}