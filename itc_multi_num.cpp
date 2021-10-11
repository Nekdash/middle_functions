#include "middle.h"

long long itc_multi_num(long long number){
    if ( number < 0){
        number *= (-10);
     }
    long long res = 1;
    int len = itc_len_num(number);
    for(int i = 0; i < len; i++){
        res *= number % 10;
        number /= 10;
    }
    return res;
}
