#include "test.h"
void test(long long number, int expected, string test_name) {

	int actual = reverse_number_digits(number);
	string msg;
	if (actual == expected) {
		msg = "Pass";
	}
	else {
		msg = "Fail";
	}
	cout << test_name << "-->" << msg << endl;

}

void run_all_tests() {
	test(12345,54321 , "test01");
	test(-123,-321 , "test02");
	test(1001,1001 , "test03");
	test(100500,500100 , "test04");
	test(125000,521000 , "test05");
	test(100,100, "test06");
}