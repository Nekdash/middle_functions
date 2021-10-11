#include "middle.h"

int itc_sum_num(long long number){
    if ( number < 0){
        number *= (-10);
    }
    int res = 0;
    int len = itc_len_num(number);
    for(int i = 0; i < len; i++){
        res = res + number % 10;
        number = number / 10;

    }
    return res;
}
