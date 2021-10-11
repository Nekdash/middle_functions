#include "middle.h"

long long itc_bin_num(long long number){
    if ( number > ipow(2, 63) - 1 || number < ipow(2, 63) *(-1))
        return -1;
    long long res = 0;
    int i = 0;
    while (number != 0){
        res += (number % 2)* ipow(10, i);
        i++;
        number = number / 2;
    }
    return res;
}

/*

*/
