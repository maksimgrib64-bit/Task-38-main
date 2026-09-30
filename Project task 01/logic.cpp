#include "logic.h"
bool get_palindrome_number(long long number) {
	if (number <= 0) {
		return  false;
	}
	int amount = 0;
	int first = 0;
	int last = number % 10;
	bool all_same = true;

	while (number > 0) {
		int d = number % 10;
		amount++;
		first = d;
		if (d != last) {
			all_same = false;
		}
		number = number / 10;
	}
	bool even_count = (amount % 2 != 0);
	if (even_count == true and first == last or all_same == true) {
		return true;
	}

}