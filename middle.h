#ifndef MIDDLE_H_INCLUDED
#define MIDDLE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

void itc_num_print(int number);  // works
int itc_len_num(long long number); // works
int itc_sum_num(long long number); // works
long long itc_multi_num(long long number);  //works
int itc_null_count(long long number); // works


int itc_max_num(long long number); // works
int itc_min_num(long long number); // works
int itc_second_max_num(long long number);
int itc_second_simple_max_num(long long number);
int itc_rev_num(long long number); // works

bool itc_mirror_num(long long number); // works
int itc_mirror_count(long long number); // works

long long itc_bin_num(long long number); // overload
long long itc_oct_num(long long number); // overload
int itc_rev_bin_num(long long number); // overload
int itc_rev_oct_num(long long number); // overload

int itc_covert_num(long long number, int ss); // overload
int itc_rev_covert_num(long long number, int ss); // overload



long long ipow(long long number, int pow); // works
long long negative(long long number); // works
#endif // MIDDLE_H_INCLUDED
