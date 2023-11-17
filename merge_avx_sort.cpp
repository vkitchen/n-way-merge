#include <immintrin.h>

#include "harness.h"

static int *postings[16];
static unsigned char segments[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

static __m128i masks[16] = {
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 0, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 0, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 0, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 0, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 7, 0, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 8, 0, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 9, 0, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 10, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 11, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 12, 0, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 13, 0, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 14, 0, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(15, 0, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
	_mm_set_epi8(0, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1),
};

static void sort_full() {
	int i, j;
	for (i = 1; i < 16; i++) {
		unsigned char x = segments[i];
		for (j = i - 1; j >= 0 && *postings[segments[j]] < *postings[x]; j--)
			segments[j+1] = segments[j];
		segments[j+1] = x;
	}
}

static void sort_partial() {
#ifdef __AVX__
	int i;
	unsigned char x = segments[0];
	for (i = 0; i < 15 && *postings[x] < *postings[segments[i+1]]; i++)
		;

        __m128i reg = _mm_loadu_epi8(segments);
	reg = _mm_shuffle_epi8(reg, masks[i]);
        _mm_storeu_epi8(segments, reg);
#endif
}

void merge_avx_sort(struct test *t, int n) {
	if (n != 16)
		return;

	for (int i = 0; i < 16; i++)
		postings[i] = t->postings[i];

	sort_full();

	// process
	size_t pos = 0;
	for (;;) {
		if (*postings[segments[0]] == 0)
			break;

		t->results[pos++] = *postings[segments[0]]++;

		sort_partial();
	}
}
