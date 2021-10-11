#include "middle.h"

int itc_len_num(long long number){
    if (number <  0){
        number *= (-1);
    }
    negative(number);
    int res = 0;
    if ( number == 0)
        return 1;
    while(number != 0){
        number = number / 10;
        res++;
    }
    return res;

}
