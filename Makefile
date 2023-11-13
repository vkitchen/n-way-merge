CFLAGS = -Wall -Wextra -O2 -g

SRC = \
	harness.cpp \
	merge_baseline_copy_sort.cpp \
	merge_quick_sort.cpp \
	merge_std_sort.cpp \
	merge_insertion_sort.cpp \
	merge_insertion_sort_fast.cpp \
	merge_bubble_sort.cpp \
	merge_bubble_sort_fast.cpp \
	merge_double_bubble_sort.cpp \
	merge_heap.cpp \
	merge_state_machine_compiled.cpp \
	merge_state_machine_lookup_table.cpp \
	merge_state_machine_lookup_table_alt.cpp \
	merge_state_machine_lookup_table_asc.cpp

OBJECTS = $(SRC:.cpp=.o)

.cpp.o:
	$(CXX) $(CFLAGS) -c $<

all: gen gen-lookup gen-lookup-asc main

merge_state_machine_compiled.o: merge_state_machine_compiled.cpp
	$(CXX) -Wall -Wextra -O1 -g -c $<

main.o: main.cpp config.h
	$(CXX) $(CFLAGS) -c $<

gen: gen.o
	$(CXX) $(CFLAGS) -o $@ gen.o
	for i in `seq 3 7`; do ./gen "$$i" > "state_machine_$$i.cpp"; done

gen-lookup: gen_lookup.o
	$(CXX) $(CFLAGS) -o $@ gen_lookup.o
	for i in `seq 3 8`; do ./gen-lookup "$$i" > "state_table_$$i.h"; done

gen-lookup-asc: gen_lookup_asc.o
	$(CXX) $(CFLAGS) -o $@ gen_lookup_asc.o
	for i in `seq 3 8`; do ./gen-lookup-asc "$$i" > "state_table_asc_$$i.h"; done

main: main.o $(OBJECTS)
	$(CXX) $(CFLAGS) -o $@ main.o $(OBJECTS)

clean:
	rm state_machine_*.cpp gen.o gen_lookup.o main.o $(OBJECTS)
