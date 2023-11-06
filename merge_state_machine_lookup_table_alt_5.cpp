#include <stdlib.h>

#include "harness.h"

#include "state_table_5.h"

static int *segments[5];

static int cmp_p(const void *a, const void *b) {
	return **(int **)b - **(int **)a;
}

void merge_state_machine_lookup_table_alt_5(struct test *t) {
	for (int i = 0; i < 5; i++)
		segments[i] = t->postings[i];

	qsort(segments, 5, sizeof(int *), cmp_p);

	// process
	size_t pos = 0;
	size_t state = 0;
	for (;;) {
		size_t seg = priorities[state][0];

		if (*segments[seg] == 0)
			break;

		t->results[pos++] = *segments[seg];
		segments[seg]++;
		
		if (*segments[seg] >= *segments[priorities[state][1]])
			continue;
		else if (*segments[seg] >= *segments[priorities[state][2]])
			state = transitions[state][1];
		else if (*segments[seg] >= *segments[priorities[state][3]])
			state = transitions[state][2];
		else if (*segments[seg] >= *segments[priorities[state][4]])
			state = transitions[state][3];
		else
			state = transitions[state][4];
	}
}
