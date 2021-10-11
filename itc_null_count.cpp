#include "middle.h"

int itc_null_count(long long number){
    if ( number < 0){
        number *= (-1);
     }
    int res = 0;
    int len = itc_len_num(number);
    for ( int i = 0; i < len; i++){
        if (number % 10 == 0){
            res++;
        }
        number /= 10;
    }
    return res;
}
