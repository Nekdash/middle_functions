#include "middle.h"

 int itc_rev_bin_num(long long number){
    long long res = 0;
    int len = itc_len_num(number);
    for (int i =0; i < len; i++){
        res += (number%10)*ipow(2, i);
        number /= 10;
    }
    return res;
 }
