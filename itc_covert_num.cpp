#include "middle.h"

 int itc_covert_num(long long number, int ss){
    if ( number > ipow(2, 63) - 1 || number < ipow(2, 63) *(-1))
        return -1;
    long long res = 0;
    int i = 0;
    while (number != 0){
        res += (number % ss)*ipow(10, i);
        i++;
        number = number / ss;
    }
    return res;
 }
