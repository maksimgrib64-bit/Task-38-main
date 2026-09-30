#include "logic.h"
int reverse_number_digits(long long number) {
	bool neg = false;
	if (number < 0) {
		neg = true;
		number = -number;
	}
	int amount = 0;

	while (number > 0 ) {
		amount++;
		number = number / 10;
	}
	int left_pos = amount - 1;
	int right_pos = 0;
	while (left_pos>right_pos) {
		long long pl = 1;
		for (int k = 0; k < left_pos; k++) { pl = pl * 10; }
		int dl = (number / pl) % 10;
		if (dl == 0) {
			left_pos--;
			continue;
		}
		long long pr = 1;
		for (int k = 0; k < right_pos; k++) { pr = pr * 10; }

		int dr = (number / pr) % 10;
		if (dr == 0) {
			right_pos++;
			continue;
		}
		number = number - dl * pl - dr * pr + dr * pl + dl * pr;
		left_pos--;
		right_pos++;

	}
	if (neg)number = -number;
	return number;
}