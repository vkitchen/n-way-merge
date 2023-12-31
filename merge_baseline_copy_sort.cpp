#include <string.h>

#include <algorithm>
#include <functional>

#include "harness.h"

bool merge_baseline_copy_sort(struct test *t, int n) {
	for (int i = 0; i < n; i++)
		memcpy(&t->baseline[i * t->length], t->postings[i], sizeof(int) * t->length);

	std::sort(t->baseline, t->baseline + n * t->length, std::greater<int>());

	return true;
}
